
class Unsafe_OBJECT_CLASS{
    public:
        int cpid;
        char *name;
        //=====
        int get_cpid();
        void set_cpid(int cpid_input);
        
        void set_name(char *name_input);
        char* get_name();

    private:
        int num_id;
        char *property;
};
//cpid set

int Unsafe_OBJECT_CLASS::get_cpid(){
    return cpid;
};
void Unsafe_OBJECT_CLASS::set_cpid(int cpid_input){
    //explode test
    if(!explode(cpid_input))
        cpid = cpid_input;
    else
        cpid = 0;
};
//name set
char *Unsafe_OBJECT_CLASS::get_name(){
    return name;
}
void Unsafe_OBJECT_CLASS::set_name(char *name_input){
    name=name_input;
}
