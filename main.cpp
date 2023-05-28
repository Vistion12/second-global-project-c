<<<<<<< HEAD
void  crush() {
	return v;
}


void initVoid(void v) {
	cin >> v;
}

void initP(int* p) {
	cin >> p;
}



=======
void initvoid(void* p, strig type) {
	if (type == "int") {
		cin >> (int*)p;
	}
}
void initP(int* p) {
	cin >> *p;
}

>>>>>>> fix
int main(){
	cout << "hello world";
}