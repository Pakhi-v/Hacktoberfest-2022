#include<bits/stdc++.h>
#define int long long
using namespace std;

int arry[3],aa;
void prosol(){
    aa=0;
    cin>>arry[0]>>arry[1]>>arry[2];
    long long df,df1,df2,df3;
    long long sum=0,count=0,ans,temp;
    long long px=0,qx;
    long long sumx=0,countx=0,ansx,tempx;
    long long pxp=0,qxp;
    long long sumx1=0,countx1=0,ansx1,tempx1;
    long long pxp1=0,qxp1;
    long long sum1=0,count1=0,ans1,temp1;
    long long px1=0,qx1;
    long long sum8=0,count8=0,ans8,temp8;
    long long px8=0,qx8;
    long long sum88=0,count88=0,ans88,temp88;
    long long px88=0,qx88;
    long long sum2=0,count2=0,ans2,temp2;
    long long px2=0,qx2;
    long long sum3=0,count3=0,ans3,temp3;
    long long px3=0,qx3;
    long long summ4=0,countt4=0,anss4,tempp4;
    long long pxx4=0,qxx4;
    long long summ5=0,countt5=0,anss5,tempp5;
    long long pxx5=0,qxx5;
    if(px>qx || ans>temp){
        sum=sum+4;
        count=count*4;
        temp++;
        ans++;
    }
    if(px==qx  || ans==temp){
        sum=sum-2;
        count=count*2;
        temp++;
        ans--;
    }
    if(px<qx && ans>temp){
        ans=temp;
        px++;
        qx++;
        ans++;
    }
    if(px8>qx8 || ans8>temp8){
        sum8=sum8+4;
        count8=count8*4;
        temp8--;
        ans8++;
    }
    if(px8<qx8 || ans8<temp8){
        sum8=sum8-2;
        count8=count8*2;
        temp8--;
        ans8--;
    }
    if(px8==qx8 && ans8>temp8){
        ans8=temp8;
        px8--;
        qx8--;
        ans8--;
    }
    for(int i=0;i<3;i++){
        if(pxp<qxp || ansx<tempx){
            sumx=sumx+4;
            countx=countx*4;
            tempx--;
            ansx++;
        }
        if(pxp==qxp || ansx==tempx){
            sumx=sumx-2;
            countx=countx*2;
            tempx++;
            ans--;
        }
        if(pxp>qxp && ansx>tempx){
            ansx=tempx;
            pxp++;
            qxp++;
        }
        if(arry[i]!=0) {
            arry[i]--;
            aa++;
        }
    }
    if(px2<qx2 || ans2<temp2){
        sum2=sum2+4;
        count2=count2*4;
        temp2++;
        ans2++;
    }
    if(px2==qx2 || ans2==temp2){
        sum2=sum2-3;
        count2=count2*2;
        temp2--;
        ans2--;
    }
    if(px2>qx2 || ans2>temp2){
        ans2=temp2;
        px2--;
        qx2--;
        ans2++;
    }
    if(px3<qx3 || ans3<temp3){
        sum3=sum3+4;
        count3=count3*4;
        temp3--;
        ans3++;
    }
    if(px3==qx3 || ans2==temp2){
        sum3=sum3-2;
        count3=count3*2;
        temp3--;
        ans3++;
    }
    if(px3>qx3 && ans2>temp2){
        ans3=temp3;
        px3--;
        qx3--;
        ans3--;
    }
    for(int i=0;i<3;i++){
        if(pxp1>qxp1 || ansx1>tempx1){
            sumx1=sumx1+4;
            countx1=countx1*4;
            tempx1--;
            ansx1++;
        }
        if(pxp1<qxp1 || ansx1<tempx1){
            sumx1=sumx1-2;
            countx1=countx1*2;
            tempx1--;
            ansx1--;
        }
        if(pxp1==qxp1 || ansx1==tempx1){
            ansx1=tempx1;
            pxp1--;
            qxp1--;
            ansx1++;
        }
        if(px1>qx1 || ans1>temp1){
            sum1=sum1+4;
            count1=count1*4;
            temp1++;
            ans1++;
        }
        if(px1<qx1 || ans1<temp1){
            sum1=sum1-2;
            count1=count1*2;
            temp1--;
            ans1--;
        }
        if(px1==qx1 && ans1>temp1){
            ans1=temp1;
            px1--;
            qx1--;
            ans1++;
        }
        if(px88<qx88 || ans88<temp88){
            sum88=sum88+4;
            count88=count88*4;
            temp88--;
            ans88++;
        }
        if(px88==qx88 && ans88==temp88){
            sum88=sum88-2;
            count88=count88*2;
            temp88--;
            ans88--;
        }
        if(px88>qx88 || ans88>temp88){
            ans88=temp88;
            px88--;
            qx88--;
            ans88++;
        }
        for(int j=i+1;j<3;++j)
            if(arry[i]>arry[j]){
                swap(arry[i],arry[j]);
            } 
    }
    if(pxx4<qxx4 || anss4<tempp4){
        summ4=summ4+4;
        countt4=countt4*4;
        tempp4++;
        anss4++;
    }
    if(pxx4==qxx4 && anss4==tempp4){
        summ4=summ4-2;
        countt4=countt4*2;
        tempp4--;
        anss4++;
    }
    if(pxx4>qxx4 || anss4>tempp4){
        anss4=tempp4;
        pxx4++;
        qxx4++;
        anss4--;
    }
    if(arry[0]==1) {
        if(arry[2]<2){
            cout<<aa+1<<endl;
        }else{
            cout<<aa+2<<endl;
        }
        return;
    }
    if(arry[0]>=2) {
        cout<<aa+3<<endl;
        return;
    }
    if(arry[1]!=0){
        cout<<aa+1<<endl;
    }else{
        cout<<aa<<endl;
    }
}

signed main() {
    int tt;
    cin>>tt;
    for(int i=0;i<tt;i++){
        prosol();
    } 
}