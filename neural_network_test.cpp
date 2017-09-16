//include <iostream>
//include <vector>

class Sigmoid {
    private:
    int layer;
    int number;
    float bias;
    std::vector<int> weights;
    std::vector<int> inputs;
    public:
    void setLocation(int layr, int Number){
        layer = layr;
        number = Number;
    }
    void setBias(adres){
        bias = *adres;
    }
}

//een class layer
class Layer{
    private:
    int layer;
    std::vector<Sigmoid *> sigmoids; //sigmoids.push_back(&<naamvansigmoid>)
    public:
    void addSigmoid(Sigmoid *sigmoid){
        sigmoids.push_back(&sigmoid);
    }
}

class Network{
    private:
    std::vector<Layer *> layers;
}

/*int main(){
    
    return 0;
}*/
