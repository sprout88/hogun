
void print(){
	puts("Hello World!");
}


int Gcheck(char* str){
	
	puts("Gchecking...\n");
	if(str[1] == 'G' && str[2] == 'N' && str[3] == 'G' && str[4] == 'G' && str[5] == 'A'){
		puts("its GString");
		return 1;
	}else{
		puts("its not GString");
		return 0;
	}
}
