sh=input('enter hours')
sr=input('enter rate')

try:
    fh=float(sh)
    fr=float(sr)

except:
    print('error, please try entering numeric input')
    quit()

print(fr,fh)

if fh>40:
    rp=40*fr
    op=(fh-40)*fr*1.5
    xp=op+rp

else:
    xp=fh*fr

print(xp
