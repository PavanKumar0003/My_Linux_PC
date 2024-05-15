void swap(int *str){
    int temp;
    temp=str;
    str=*(str+1);
    *(str+1)=temp;
}