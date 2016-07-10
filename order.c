#include<stdio.h>
void main()
{
int a[10],b[10],n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
int d=a[i],c=0;
while(d)
{
int rem=d%2;
d=d/2;
c++;
}
b[j++]=c;
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(b[i]>b[j])
{
int t=b[i];
b[i]=b[j];
b[j]=t;
t=a[i];
a[i]=a[j];
a[j]=t;
}
else if(b[i]==b[j])
{
if(a[i]>a[j])
{
int t=b[i];
b[i]=b[j];
b[j]=t;
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
}
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}

    
