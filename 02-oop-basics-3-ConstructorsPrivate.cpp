class Test{
	int x,y;
	Test(int a, int b){
		x=a;
		y=b;
	}
	public:
	static Test* CreateObject(){
	    // this function will create an object in heap.
//		Test *t = new Test(10,10);
//		return t;

		return new Test(10,10);
	}
};
int main(){
	Test* t=Test::CreateObject();
}