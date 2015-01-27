#include<stdio.h>
#define gcu() getchar_unlocked()
#define pc(x) putchar_unlocked(x)
//#define long long int ll
#define unsigned long long ull
//fast I/O from online resources
inline void fastInt(int* x){
    register char c = gcu();
	*x = 0;
	for(; (c<48)||(c>57);c = gcu());
	for(; (c>47)&&(c<58);c = gcu())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48);
}
inline void fastLong(long long int* x){
    register char c = gcu();
	*x = 0;
	for(; (c<48)||(c>57);c = gcu());
	for(; (c>47)&&(c<58);c = gcu())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48);
}
//for NEGETIVE numbers
inline void fastIntNeg(int* x){
	register int c = gcu();
	int neg=0;
    *x=0;
    for(;((c<48||c>57)&&c!='-');c=gcu());
    if(c=='-'){
    	neg=1;
    	c=gcu();
    }
    for(;(c>47&&c<58);c=gcu()) {
    	*x=(int)((((*x)<<1)+((*x)<<3))+c-48);
    }
    if(neg)
    	//*x=-1*(*x);
    	*x=-(*x);
}
inline void fastLongNeg(long long int* x){
	register int c = gcu();
	int neg=0;
    *x=0;
    for(;((c<48||c>57)&&c!='-');c=gcu());
    if(c=='-'){
    	neg=1;
    	c=gcu();
    }
    for(;(c>47&&c<58);c=gcu()) {
    	*x=(int)((((*x)<<1)+((*x)<<3))+c-48);
    }
    if(neg)
    	//*x=-1*(*x);
    	*x=-(*x);
}
inline void fastString(char *str){
    register char c = 0;
    register int i = 0;
    while(c < 33)
        c=gcu();
    while (c != '\n'){
        str[i] = c;
        c=gcu();
        i=i+1;
    }
    str[i] = '\0';
}
// both positive and NEGETIVE for int , not long 
inline void printLineInt(int n){
	if(n>0){
	    char buf[11];
		buf[10] = '\n';
		int i = 9;
		while(n){
			buf[i--] = n % 10 + '0';
			n/= 10;
		}
		while(buf[i] != '\n')
			pc(buf[++i]);
	}
	else if(n==0){
		pc('0');
		pc('\n');
	}
	else if(n==-1){
		pc('-');
		pc('1');
		pc('\n');
	}
	else{
	    // for NEGETIVE numbers
	    pc('-');
	    n=-n;
	    char buf[11];
		buf[10]='\n';
		int i=9;
		while(n){
			buf[i--] = n % 10 + '0';
			n/= 10;
		}
		while(buf[i] != '\n')
			pc(buf[++i]);
	}
}
int main(){
	int t,n,i,j,ans,a,b=-5,flag,lim,cnt;
	fastInt(&t);
	while(t--){
	    //scanf("%d %d",&a,&b);
	    //scanf("%d",&n);
	    //fastInt(&n);
	    fastIntNeg(&n);
	    //printf("%d\n",n);
        printLineInt(n);
    }
	return(0);
}
