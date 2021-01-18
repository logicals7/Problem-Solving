//c1 = 1st Complex number
//c2 = 2nd Complex number
//f = final complex number after sum
Complex operator+(Complex c1,Complex c2)
    {
    Complex f;
    //adding real + real & img + img from both c1 & c2.
    f.a = c1.a+c2.a;
    f.b = c1.b+c2.b;
    return f;
}

//Overload the stream insertion operator << to add "a+ib" to the stream:
//out = reference to outputstream  
//f = reference to a complex object
ostream & operator << (ostream &out, Complex &f){
        //f.a = 8 & f.b = 10 >>according to the example
        out<<f.a<<"+i"<<f.b;
        return out;
}