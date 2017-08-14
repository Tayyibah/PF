//#include<iostream>
//using namespace std;
//char * toTitle(char * str);
//int getLength( const char * const str) ;
//int main()
//{
//	char * str="mint TeXt ediTor";
//	toTitle(str);
//	return 0;
//}
//int getLength( const char * const str) 
//{
//	int i=0;
//	while(str[i]!='\0')
//	{
//		i++;
//	}
//
//	return i;
//}
//char * toTitle(char * str)
//{
//	for(int i=0;str[i]!='\0';i++)
//	{	
//		if (str[i] >= 'a' && str[i] <= 'z')
//		{
//			str[i] = str[i] +32 ;	
//		}
//		i++;
//		while(str[i]!=' ')
//		{
//			if (str[i]  >= 'A' && str[i] <= 'Z')
//			{
//				str[i]  = str[i] - 32 ;
//			}
//			i++;
//		}
//	}
//	for(int i=1;i<getLength(str);i++)
//	{
//		cout<<str[i]<<" ";
//	}
//	cout<<endl;
//	return str;
//}