#ifndef DATA_H
#define DATA_H

class data
{
    public:
        data(int siz);
        bool full();
        bool empt();
        void push(int input);
        void pull(int &input);

    private:
        int *lis;
        int stacksize;
        int top;
};

#endif // DATA_H
