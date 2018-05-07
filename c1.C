void c1()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue May  8 00:01:39 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",2026,328,700,500);
   c1->Range(-1.25,-0.4455224,11.25,1.23112);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TF1 *function11 = new TF1("function1","sin(x)/x",0,10, TF1::EAddToList::kDefault);
   function11->SetFillColor(19);
   function11->SetFillStyle(0);
   function11->SetLineColor(2);
   function11->SetLineWidth(2);
   function11->GetXaxis()->SetLabelFont(42);
   function11->GetXaxis()->SetLabelSize(0.035);
   function11->GetXaxis()->SetTitleSize(0.035);
   function11->GetXaxis()->SetTitleFont(42);
   function11->GetYaxis()->SetLabelFont(42);
   function11->GetYaxis()->SetLabelSize(0.035);
   function11->GetYaxis()->SetTitleSize(0.035);
   function11->GetYaxis()->SetTitleOffset(0);
   function11->GetYaxis()->SetTitleFont(42);
   function11->Draw("");
   
   TPaveText *pt = new TPaveText(0.4298281,0.9370168,0.5701719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("sin(x)/x");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
