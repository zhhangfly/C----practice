#include <iostream>
#include <vector> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	void print(int n);
	void printVector(vector<int> vec);
	vector<int> v1(10,1);  //vector<T> v1(n, val)  v1������n���ظ���Ԫ�أ�ÿ��Ԫ�ص�ֵ����val
	//vector<int> v2 = {1,2,3,4,5};   //vector<T> v2={a,b,c,d...}  v2�������г�������Ԫ��
	int a[] = {1,2,3,4,5};
	vector<int> v3(a,a+5); //������a��ȫ��Ԫ��������ʼ����vector 
	int len = v1.size();  //��ȡv1��Ԫ�ظ��� 
	cout<<"v1�ĳ���Ϊ��"<<len<<endl; 
	for(int i = 0; i<5 ; i++){
		v3.push_back(i+6);	//��v3��ĩβ����µ�Ԫ�� 
	} 
	v1.insert(v1.begin(),2);	//��v1�ʼ֮������һ��ֵΪ2��Ԫ�أ���ʱv1Ϊ21111111111
	v3.insert(v3.end(),v1.begin(),v1.begin()+5);	//�˶δ���������ǽ�v1�е�һ��Ԫ�طŵ�v3����
													//v3.end()������õ���ʼλ�ã����������ؼ�����
											//Ƭ����v1�е���ʼ�Լ���ֹλ�� ����ʱv3���Ϊ1234567891011111 
	printVector(v1);
	printVector(v3);
	
	//for_each(v1.begin(),v1.end(),print);//��for_each���б���  
	
	
	return 0;
}

void printVector(vector<int> vec){   //һ���������vector�ĺ��� 
	vector<int>::iterator i;	//���������͵ı��������� 
	for(i=vec.begin();i != vec.end(); ++i){  
		if(i == vec.end()-1)     //�����һ��Ԫ��ʱ���л��� 
			cout<<*i<<endl;
		else
			cout<<*i;
	}
}

void print(int n)
{
	cout<<n<<endl;
}






