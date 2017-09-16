//een class voor de neuronen
class Sigmoid {
    private:
    //de bias, een pointer naar een vector van alle biases om makkelijk te kunnen rekenen
    float bias;
    
    //een vector met alle weights op volgorde
    std::vector<float *> weights;
    
    public:
    //om de het adres uit de algemene biasvector van de bias in te stellen
    void setBias(float *biasToPointTo){
        bias = *biasToPointTo;
    }
    //...
    void setWeights(vector<float *> weightVector, int start, int end){
        for(int i = start; i < end; i++){
            std::weights.push_back(*weightVector.at(i));
        }
    }
    //
    float calcOutput(vector<float> input){
        //...
    }
}

//een class voor de layers
class Layer{
    private:
    int layer;
    std::vector<Sigmoid *> sigmoids; //sigmoids.push_back(&<naamvansigmoid>)
    std::vector<inputs>
    public:
    void addSigmoid(Sigmoid *sigmoid){
        sigmoids.push_back(&sigmoid);
    }
}

class Network{
    private:
    std::vector<Layer *> layers;
}
