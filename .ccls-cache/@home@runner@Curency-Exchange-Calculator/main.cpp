#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float CADeuro;
  float CADrubles;
  float CADsingaporedollar;
  float CADphilippinepesos;
  float CADmexicanpesos;
  float CADtaka;
  float CADyen;
  float CADswissfranc;
  float CADbritishpoundsterling;
  float CADnaira;

  float CADtotal;
  
  float euro;
  float rubles;
  float singaporedollar;
  float philippinepesos;
  float mexicanpesos;
  float taka;
  float yen;
  float swissfranc;
  float britishpoundsterling;
  float naira;

  float CADtoeuro;
  float CADtorubles;
  float CADtosingaporedollar;
  float CADtophilippinepesos;
  float CADtomexicanpesos;
  float CADtotaka;
  float CADtoyen;
  float CADtoswissfranc;
  float CADtobritishpoundsterling;
  float CADtonaira;

  float CADtototal;

  float CADtoeuro1;
  float CADtorubles1;
  float CADtosingaporedollar1;
  float CADtophilippinepesos1;
  float CADtomexicanpesos1;
  float CADtotaka1;
  float CADtoyen1;
  float CADtoswissfranc1;
  float CADtobritishpoundsterling1;
  float CADtonaira1;
  
  cout<< "Enter number of European euro(€): ";
  cin>> euro;
  cout<< "Enter number of Russian rubles(₽): ";
  cin>> rubles;
  cout<< "Enter number of Singapore dollars($): ";
  cin>> singaporedollar;
  cout<< "Enter number of Philippine pesos(₱): ";
  cin>> philippinepesos;
  cout<< "Enter number of Mexican pesos($): ";
  cin>> mexicanpesos;
  cout<< "Enter number of Bangladeshi taka(৳): ";
  cin>> taka;
  cout<< "Enter number of Japanese yen(¥): ";
  cin>> yen;
  cout<< "Enter number of Swiss franc(Fr.): ";
  cin>> swissfranc;
  cout<< "Enter number of British pound sterling(£): ";
  cin>> britishpoundsterling;
  cout<< "Enter amount of Nigerian naira(₦): ";
  cin>> naira;

  
  CADeuro = euro * 1.38;
  CADrubles = rubles * 0.017;
  CADsingaporedollar = singaporedollar * 0.95;
  CADphilippinepesos = philippinepesos * 0.025;
  CADmexicanpesos = mexicanpesos * 0.063;
  CADtaka = taka * 0.015;
  CADyen = yen * 0.011;
  CADswissfranc = swissfranc * 1.38;
  CADbritishpoundsterling = britishpoundsterling * 1.73;
  CADnaira = naira * 0.0031;

  CADtotal = CADeuro + CADrubles + CADsingaporedollar +
  CADphilippinepesos + CADmexicanpesos + CADtaka + CADyen +
  CADswissfranc + CADbritishpoundsterling + CADnaira;
  
  cout<< " \n";
  cout<< "total amount of European euros in CAD($): "<< CADeuro << "\n";
  cout<< "total amount of Russian rublesin CAD($): "<< CADrubles << "\n";
  cout<< "total amount of Singapore dollars in CAD($): "<< CADsingaporedollar << "\n";
  cout<< "total amount of Philipine pesos in CAD($): "<< CADphilippinepesos << "\n";
  cout<< "total amount of Mexican pesos in CAD($): "<< CADmexicanpesos << "\n";
  cout<< "total amount of Bangaldeshi taka in CAD($): "<< CADtaka << "\n";
  cout<< "total amount of Japanese yen in CAD($): "<< CADyen << "\n";
  cout<< "total amount of Swiss franc in CAD($): "<< CADswissfranc << "\n";
  cout<< "total amount of British pound sterling in CAD($): "<< CADbritishpoundsterling << "\n";
  cout<< "total amount of Nigerian naira in CAD($): "<< CADnaira << "\n";
  cout<< " \n";
  cout<< "total amount of money in CAD($): "<< CADtotal << "\n";

  
  //Canada wishes to donate some of their own money to the top hospitals from the 10 countries.
 cout<< " \n";
 cout<< " \n";
  
 cout<< "Canada wishes to donate some of their own money to the top hospitals from the ten countries.";
  
 cout<< " \n";
 cout<< " \n";
  
 cout<< "Amount of CAD($) Canada donates to France: ";
 cin>> CADtoeuro;
 cout<< "Amount of CAD($) Canada donates to Russia: ";
 cin>> CADtorubles;
 cout<< "Amount of CAD($) Canada donates to Singapore: ";
 cin>> CADtosingaporedollar;
 cout<< "Amount of CAD($) Canada donates to Philippine: ";
 cin>> CADtophilippinepesos;
 cout<< "Amount of CAD Canada donates to Mexico: ";
 cin>> CADtomexicanpesos;
 cout<< "Amount of CAD($) Canada donates to Bangladesh: ";
 cin>> CADtotaka;
 cout<< "Amount of CAD($) Canada donates to Japan: ";
 cin>> CADtoyen;
 cout<< "Amount of CAD($) Canada donates to Switzerland: ";
 cin>> CADtoswissfranc;
 cout<< "Amount of CAD($) Canada donates to Britain: ";
 cin>> CADtobritishpoundsterling;
 cout<< "Amount of CAD($) Canada donates to Nigeria: ";
 cin>> CADtonaira;
 
 CADtototal = CADtoeuro + CADtorubles + CADtosingaporedollar + CADtophilippinepesos + CADtomexicanpesos + CADtotaka + 
 CADtoyen + CADtoswissfranc + CADtobritishpoundsterling + 
 CADtonaira;
  
 cout<< " \n";
 cout<< "total amount of money in CAD: "<< CADtototal << "\n";
 cout<< " \n";
 CADtoeuro1 = CADtoeuro * 0.69;
 CADtorubles1 = CADtorubles * 59.38;
 CADtosingaporedollar1 = CADtosingaporedollar * 1.06;
 CADtophilippinepesos1 = CADtophilippinepesos * 40.31;
 CADtomexicanpesos1 = CADtomexicanpesos * 16.03;
 CADtotaka1 = CADtotaka * 67.55;
 CADtoyen1 = CADtoyen * 90.87;
 CADtoswissfranc1 = CADtoswissfranc * 0.73;
 CADtobritishpoundsterling1 = CADtobritishpoundsterling * 0.58;
 CADtonaira1 = CADtonaira * 326.85;

 cout<< "Amount of CAD given to France in euro(€): " << CADtoeuro1 << "\n";
 cout<< "Amount of CAD given to Russia in rubles(₽): " << CADtorubles1 << "\n";
 cout<< "Amount of CAD given to Singapore in singapore dollar($): " << CADtosingaporedollar1 << "\n";
cout<< "Amount of CAD given to Philippines in pesos(₱): " << CADtophilippinepesos1 << "\n";
 cout<< "Amount of CAD given to Mexico in pesos($): " << CADtomexicanpesos1 << "\n";
 cout<< "Amount of CAD given to Bangaldesh in taka(৳): " << CADtotaka1 << "\n";
 cout<< "Amount of CAD given to Japan in yen(¥): " << CADtoyen1 << "\n";
 cout<< "Amount of CAD given to Switzerland in swiss franc(Fr.): " << CADtoswissfranc1 << "\n";
 cout<< "Amount of CAD given to Britain in british pound sterling(£): " << CADtobritishpoundsterling1 << "\n";
 cout<< "Amount of CAD given to Nigeria in naira(₦): " << CADtonaira1 << "\n";
cout<< " \n";
cout<< "Canada thanks you for your donations! \n";
}