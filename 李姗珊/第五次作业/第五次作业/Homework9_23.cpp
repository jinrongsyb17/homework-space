 //9－23 
//（1）
#include<iostream>
using namespace std;
template<unsigned M,unsigned N>
class Permutation{
public:
    enum{VALUE=Permutation<M,N-1>::VALUE*(M-N+1)};
};

template<unsigned M>
class Permutation<M,1>{
    public:
    enum{VALUE=M;}
};
int main(){
    cout<<Permutation<10, 2>::VALUE<<endl;
    return 0;
}

/*(2)
 #include<iostream>
 using namespace std;
 template<unsigned M,unsigned N>
 class Permutation{
 public:
 enum{VALUE={N&M==0}?M:Permutation<N%M,M>::VALUE};
 };
 
 template<unsigned N>
 class Permutation<0,N>{
 public:
 enum{VALUE=-1};
 };
 
 int main(){
 {
 cout<<Permutation<12,18>::VALUE<<endl;
 return 0;
 }

