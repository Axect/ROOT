// ROOT Script
{
    // Make canvas
    TCanvas *tC = new TCanvas("tC", "just canvas", 1000, 600);
    
    // Test function
    TF1 *f1 = new TF1("f1", "exp(-x^2)", -4, 4);
    
    f1->Draw();
    tC->Draw();
    
    TImage *img = TImage::Create();
    img->FromPad(tC);
    
    img->WriteImage("gauss.png");
    
    delete tC;
    delete f1;
    delete img;
}