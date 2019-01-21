#include <iostream>
#include <vector> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	void print(int n);
	void printVector(vector<int> vec);
	vector<int> v1(10,1);  //vector<T> v1(n, val)  v1包含了n个重复的元素，每个元素的值都是val
	//vector<int> v2 = {1,2,3,4,5};   //vector<T> v2={a,b,c,d...}  v2包含了列出的所有元素
	int a[] = {1,2,3,4,5};
	vector<int> v3(a,a+5); //将数组a的全部元素用来初始化此vector 
	int len = v1.size();  //获取v1的元素个数 
	cout<<"v1的长度为："<<len<<endl; 
	for(int i = 0; i<5 ; i++){
		v3.push_back(i+6);	//在v3的末尾添加新的元素 
	} 
	v1.insert(v1.begin(),2);	//在v1最开始之处插入一个值为2的元素，此时v1为21111111111
	v3.insert(v3.end(),v1.begin(),v1.begin()+5);	//此段代码的作用是将v1中的一段元素放到v3中来
													//v3.end()代表放置的起始位置，后面两个关键字是
											//片段在v1中的起始以及终止位置 ，此时v3结果为1234567891011111 
	printVector(v1);
	printVector(v3);
	
	//for_each(v1.begin(),v1.end(),print);//用for_each进行遍历  
	
	
	return 0;
}

void printVector(vector<int> vec){   //一个常规遍历vector的函数 
	vector<int>::iterator i;	//迭代器类型的变量的声明 
	for(i=vec.begin();i != vec.end(); ++i){  
		if(i == vec.end()-1)     //在最后一个元素时进行换行 
			cout<<*i<<endl;
		else
			cout<<*i;
	}
}

void print(int n)
{
	cout<<n<<endl;
}






