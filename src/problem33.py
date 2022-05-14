if '__main__' == __name__:

    fractions = []

    for numerator in range(10, 99):
        for denominator in range(numerator + 1, 100):
            fraction = numerator / denominator
            sn, sm = str(numerator), str(denominator)
            k = sn + sm
            s = set([c for c in k])
            if len(s) == 4:
                continue
            for c in s:
                if c == '0':
                    continue
                d = int(c)
                snd, smd = sn.replace(c, ''), sm.replace(c, '')
                if not snd or not smd or smd == '0':
                    continue

                if int(snd) / int(smd) == fraction:
                    fractions.append((numerator, denominator))

    pn = 1
    dn = 1

    for numerator, denominator in fractions:
        pn *= numerator
        dn *= denominator

    print(f'{pn}/{dn}')
