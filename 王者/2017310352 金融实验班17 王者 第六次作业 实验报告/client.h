#ifndef CLIENT_H
#define CLIENT_H
//其中静态成员为类的属性，为所有的类的对象共同拥有
class client{
public:
	client();
	~client();
	static void ChangeServerName(char ss);//改变服务器名称
	static void showServeName();
	static void showClientNum();
private:
	static char ServeName;//保存服务器名，引用说明
	static int ClientNum;//记录已经定义的客户（对象）的数量，引用说明
}；
#endif