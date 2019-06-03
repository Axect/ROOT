// ROOT Script
{
    gROOT->Reset();
    
    #include <vector>
    #include <random>
    
    vector<double> v(10);
    std::generate(v.begin(), v.end(), rand);
    
    for (auto i=v.begin(); i != v.end(); ++i) {
        std::cout << "vec " << *i << std::endl;
    }
    
    vector<double>::iterator it;
    it = TMath::LocMin(v.begin(), v.end());
    std::cout << "min " << *it << std::endl;
}
