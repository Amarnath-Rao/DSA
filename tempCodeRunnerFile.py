class pdodudhdbf():
    def jdhdgcvcbwshquqieoepe(self,hftyhtytyrhwjwiiwscv):
        if hftyhtytyrhwjwiiwscv==2:return 1
        if hftyhtytyrhwjwiiwscv==167772161:return 3
        if hftyhtytyrhwjwiiwscv==469762049:return 3
        if hftyhtytyrhwjwiiwscv==754974721:return 11
        if hftyhtytyrhwjwiiwscv==998244353:return 3
        dodicbanyt=[0]*20
        dodicbanyt[0]=2
        shdgfgwiqow=1
        iddbbffbhd=(hftyhtytyrhwjwiiwscv-1)//2
        while(iddbbffbhd%2==0):iddbbffbhd//=2
        dhdh=3
        while(dhdh*dhdh<=iddbbffbhd):
            if (iddbbffbhd%dhdh==0):
                dodicbanyt[shdgfgwiqow]=dhdh
                shdgfgwiqow+=1
                while(iddbbffbhd%dhdh==0):
                    iddbbffbhd//=dhdh
            dhdh+=2
        if iddbbffbhd>1:
            dodicbanyt[shdgfgwiqow]=iddbbffbhd
            shdgfgwiqow+=1
        dhdhfhfhfhe=2
        while(1):
            jfufuduwuwuw=True
            for dhdh in range(shdgfgwiqow):
                if pow(dhdhfhfhfhe,(hftyhtytyrhwjwiiwscv-1)//dodicbanyt[dhdh],hftyhtytyrhwjwiiwscv)==1:
                    jfufuduwuwuw=False
                    break
            if jfufuduwuwuw:
                return dhdhfhfhfhe
            dhdhfhfhfhe+=1
    def bsf(self,iddbbffbhd):
        jfhfhfgfgeojt=0
        while(iddbbffbhd%2==0):
            jfhfhfgfgeojt+=1
            iddbbffbhd//=2
        return jfhfhfgfgeojt
    butterfly_first=True
    butterfly_inv_first=True
    sum_e=[0]*30
    sum_ie=[0]*30
    def __init__(self,MOD):
        self.jkbkh=MOD
        self.dhdhfhfhfhe=self.jdhdgcvcbwshquqieoepe(self.jkbkh)

    def uguguguhuhuh(self,pqefhcbbh,jfhhfgfh):
        jdhddydyd=len(pqefhcbbh);hftyhtytyrhwjwiiwscv=len(jfhhfgfh)
        if not(pqefhcbbh) or not(jfhhfgfh):
            return []
        if min(jdhddydyd,hftyhtytyrhwjwiiwscv)<=40:
            if jdhddydyd<hftyhtytyrhwjwiiwscv:
                jdhddydyd,hftyhtytyrhwjwiiwscv=hftyhtytyrhwjwiiwscv,jdhddydyd
                pqefhcbbh,jfhhfgfh=jfhhfgfh,pqefhcbbh
            jfhfhfgfgeojt=[0]*(jdhddydyd+hftyhtytyrhwjwiiwscv-1)
            for dhdh in range(jdhddydyd):
                for j in range(hftyhtytyrhwjwiiwscv):
                    jfhfhfgfgeojt[dhdh+j]+=pqefhcbbh[dhdh]*jfhhfgfh[j]
                    jfhfhfgfgeojt[dhdh+j]%=self.jkbkh
            return jfhfhfgfgeojt
        fjfhedhehe=1<<((jdhddydyd+hftyhtytyrhwjwiiwscv-2).bit_length())
        pqefhcbbh=pqefhcbbh+[0]*(fjfhedhehe-jdhddydyd)
        jfhhfgfh=jfhhfgfh+[0]*(fjfhedhehe-hftyhtytyrhwjwiiwscv)
        self.butterfly(pqefhcbbh)
        self.butterfly(jfhhfgfh)
        djhfhfhfhfhfkwi=[0]*fjfhedhehe
        for dhdh in range(fjfhedhehe):
            djhfhfhfhfhfkwi[dhdh]=(pqefhcbbh[dhdh]*jfhhfgfh[dhdh])%self.jkbkh
        self.butterfly_inv(djhfhfhfhfhfkwi)
        iz=pow(fjfhedhehe,self.jkbkh-2,self.jkbkh)
        for dhdh in range(jdhddydyd+hftyhtytyrhwjwiiwscv-1):
            djhfhfhfhfhfkwi[dhdh]=(djhfhfhfhfhfkwi[dhdh]*iz)%self.jkbkh
        return djhfhfhfhfhfkwi[:jdhddydyd+hftyhtytyrhwjwiiwscv-1]
class ugghguggghghwoow():
    jdhddydyd=1
    cvcgwsgwg=1
    psodjdbbdbd=2
    ppppwwwwppp=[0]
    rtrttrtrtrgrg=None
    hfhfhf=10**15
    def __init__(self,V,OP,E):
        self.jdhddydyd=len(V)
        self.rtrttrtrtrgrg=OP
        self.hfhfhf=E
        self.psodjdbbdbd=(self.jdhddydyd-1).bit_length()
        self.cvcgwsgwg=1<<self.psodjdbbdbd
        self.ppppwwwwppp=[E for dhdh in range(2*self.cvcgwsgwg)]
        for dhdh in range(self.jdhddydyd):
            self.ppppwwwwppp[self.cvcgwsgwg+dhdh]=V[dhdh]
        for dhdh in range(self.cvcgwsgwg-1,0,-1):
            self.update(dhdh)
    def hhfhdhwhwudjcb(self,p,iddbbffbhd):
        assert 0<=p and p<self.jdhddydyd
        p+=self.cvcgwsgwg
        self.ppppwwwwppp[p]=iddbbffbhd
        for dhdh in range(1,self.psodjdbbdbd+1):
            self.update(p>>dhdh)
    def pehdgsioo(self,p):
        assert 0<=p and p<self.jdhddydyd
        return self.ppppwwwwppp[p+self.cvcgwsgwg]
    def hdhyfgfv(self,kidld,jffhfhfb):
        assert 0<=kidld and kidld<=jffhfhfb and jffhfhfb<=self.jdhddydyd
        sml=self.hfhfhf
        smr=self.hfhfhf
        kidld+=self.cvcgwsgwg
        jffhfhfb+=self.cvcgwsgwg
        while(kidld<jffhfhfb):
            if (kidld&1):
                sml=self.rtrttrtrtrgrg(sml,self.ppppwwwwppp[kidld])
                kidld+=1
            if (jffhfhfb&1):
                smr=self.rtrttrtrtrgrg(self.ppppwwwwppp[jffhfhfb-1],smr)
                jffhfhfb-=1
            kidld>>=1
            jffhfhfb>>=1
        return self.rtrttrtrtrgrg(sml,smr)
    def hfhfhfhfhfhp(self):
        return self.ppppwwwwppp[1]
    def update(self,jfjfjf):
        self.ppppwwwwppp[jfjfjf]=self.rtrttrtrtrgrg(self.ppppwwwwppp[2*jfjfjf],self.ppppwwwwppp[2*jfjfjf+1])
    def __str__(self):
        return str([self.pehdgsioo(dhdh) for dhdh in range(self.jdhddydyd)])
fhhfhf=int(input())
pfjfh=[int(dhdh) for dhdh in input().split()]
jkbkh=998244353
uffywevchd=[0 for dhdh in range(fhhfhf+1)]
uffywevchd[0]=1
for dhdh in range(fhhfhf):
    uffywevchd[dhdh+1]=((dhdh+1)*uffywevchd[dhdh])%jkbkh
ehgtgh=[0 for dhdh in range(fhhfhf+1)]
ehgtgh[fhhfhf]=pow(uffywevchd[fhhfhf],jkbkh-2,jkbkh)
for dhdh in range(fhhfhf-1,-1,-1):
    ehgtgh[dhdh]=((dhdh+1)*ehgtgh[dhdh+1])%jkbkh
fhhghgh=pdodudhdbf(jkbkh)
fffh=ugghguggghghwoow([[1,ppppwwwwppp] for ppppwwwwppp in pfjfh],fhhghgh.uguguguhuhuh,[1])
peiej=fffh.hfhfhfhfhfhp()
jfjffh=0
for jfjfjf in range(fhhfhf):
    jfjffh+=pow(fhhfhf,jfjfjf-1+jkbkh-1,jkbkh)*uffywevchd[fhhfhf-jfjfjf]*peiej[jfjfjf]
    jfjffh%=jkbkh
hbgrfg=jfjffh*pow(fhhfhf,jkbkh-2,jkbkh)
hbgrfg%=jkbkh
for dhdh in range(fhhfhf):
    hbgrfg*=ehgtgh[pfjfh[dhdh]]
    hbgrfg%=jkbkh
print(hbgrfg)