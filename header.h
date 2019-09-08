#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

struct Teatro {
    unsigned int cont = 0;
    unsigned int escolha;
    bool *teatro;

    Teatro(unsigned lin, unsigned col)
    {
        teatro = new bool[lin*col];

        for(int i = 0; i < (lin * col); i++)
            teatro[i] = false;
    }

    ~Teatro()
    {
        delete(teatro);
    }

    void inserir(unsigned int escolha)
    {
        teatro[escolha] = true;
        cont++;
    }

    void remover(unsigned int escolha)
    {
        teatro[escolha] = false;
        cont--;
    }


};

#endif // HEADER_H_INCLUDED
