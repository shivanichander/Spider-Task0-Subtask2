#include<bits/stdc++.h>

using namespace std;

int main(){
string f,s;
string t="FLAMES";
cout<<"Enter first Name  ";
cin>>f;
cout<<"Enter second Name  ";
cin>>s;
int k,l,i=0,j,count,m=5;
count=f.size()+s.size();

while(f[i]!='\0')
	{j=0;
		while(s[j]!='\0')
		{
			if(f[i]==s[j])
			{count-=2;
			s[j]='*';
			break;
			}
			j++;
			
		}
	i++;	
	}

for(i=6;i>1;i--)		
{ 	
	if(m==-1)
		m=i-1;
	m=(m+count%i)%i;
t.erase (t.begin()+m);
m--;

}
char z=t[0];
switch(z){
	case 'F': cout<<"Friends";
	break;
	case 'L': cout<<"Love";
	break;
	case 'A': cout<<"Adore";
	break;
	case 'M': cout<<"Marriage";
	break;
	case 'E': cout<<"Enemies";
	break;
	case 'S': cout<<"Sister";
	break;
	
}

return 0;
	
}
