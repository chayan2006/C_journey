// collection of same data type  

// there are 2 type of array 
//  1 . One Dimensional (e.g. inta[100])
//   2. Multi Dimensional (e.g. inta[100][100])

// syntax of one dimensional array  
// datatype arrayname[size];
// example  
// int a[10];
// int b[20];
// int c[30];
// int d[40];
// int e[50];
// int f[60];
// int g[70];
// int h[80];
// int i[90];
// int j[100];
// int k[110];
// int l[120];
// int m[130];
// int n[140];
// int o[150];
// int p[160];
// int q[170];
// int r[180];
// int s[190];
// int t[200];
// int u[210];
// int v[220];
// int w[230];
// int x[240];
// int y[250];
// int z[260];
// int aa[270];
// int bb[280];
// int cc[290];
// int dd[300];
// int ee[310];
// int ff[320];
// int gg[330];
// int hh[340];
// int ii[350];
// int jj[360];
// int kk[370];
// int ll[380];
// int mm[390];
// int nn[400];
// int oo[410];
// int pp[420];
// int qq[430];
// int rr[440];
// int ss[450];
// int tt[460];
// int uu[470];
// int vv[480];
// int ww[490];
// int xx[500];
// int yy[510];
// int zz[520];
// int aaa[530];
// int bbb[540];
// int ccc[550];
// int ddd[560];
// int eee[570];
// int fff[580];
// int ggg[590];
// int hhh[600];
// int iii[610];
// int jjj[620];
// int kkk[630];
// int lll[640];
// int mmm[650];
// int nnn[660];
// int ooo[670];
// int ppp[680];
// int qqq[690];
// int rrr[700];
// int sss[710];
// int ttt[720];
// int uuu[730];
// int vvv[740];
// int www[750];
// int xxx[760];
// int yyy[770];
// int zzz[780];
// int aaaa[790];
// int bbbb[800];
// int cccc[810];
// int dddd[820];
// int eeee[830];
// int ffff[840];
// int gggg[850];
// int hhhh[860];
// int iiii[870];
// int jjjj[880];
// int kkkk[890];
// int llll[900];
// int mmmm[910];
// int nnnn[920];
// int oooo[930];
// int pppp[940];
// int qqqq[950];
// int rrrr[960];
// int ssss[970];
// int tttt[980];
// int uuuu[990];
// int vvvv[1000];
// int wwww[1010];
// int xxxx[1020];
// int yyyy[1030];
// int zzzz[1040];
// int aaaaa[1050];
// int bbbbb[1060];
// int ccccc[1070];
// int ddddd[1080];
// int eeeee[1090];
// int fffff[1100];
// int ggggg[1110];
// int hhhhh[1120];
// int iiiii[1130];
// int jjjjj[1140];
// int kkkkk[1150];
// int lllll[1160];
// int mmmmm[1170];
// int nnnnn[1180];
// int ooooo[1190];
// int ppppp[1200];
// int qqqqq[1210];
// int rrrrr[1220];
// int sssss[1230];
// int ttttt[1240];
// int uuuuu[1250];
// int vvvvv[1260];
// int wwwww[1270];
// int xxxxxx[1280];
// int yyyyyy[1290];
// int zzzzzz[1300];
// int aaaaaa[1310];
// int bbbbbb[1320];
// int cccccc[1330];
// int dddddd[1340];
// int eeeeee[1350];
// int ffffff[1360];
// int gggggg[1370];
// int hhhhhh[1380];
// int iiiiii[1390];
// int jjjjjj[1400];
// int kkkkkk[1410];
// int llllllll[1420];
// int mmmmmm[1430];
// int nnnnnn[1440];
// int oooooo[1450];
// int pppppp[1460];
// int qqqqqq[1470];
// int rrrrrr[1480];
// int ssssss[1490];
// int tttttt[1500];
// int uuuuuu[1510];
// int vvvvvv[1520];
// int wwwwwwww[1530];
// int xxxxxxxx[1540];
// int yyyyyyyy[1550];
// int zzzzzzzz[1560];
// int aaaaaaaaa[1570];
// int bbbbbbb[1580];
// int ccccccccc[1590];
// int ddddddd[1600];
// int eeeeeeeee[1610];
// int fffffffff[1620];
// int ggggggggg[1630];
// int hhhhhhhhh[1640];
// int iiiiiiiii[1650];
// int jjjjjjjjj[1660];
// int kkkkkkkkk[1670];
// int lllllllll[1680];
// int mmmmmmmmm[1690];
// int nnnnnnnnn[1700];
// int ooooooooo[1710];
// int ppppppppp[1720];
// int
#include <stdio.h>
int main{
    int a[100],n,i;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the elements are");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}
for(i=0;i<n;i++){
    if(a[i]==a[i+1]){
        printf("the elements are equal");
    }
}
cl