#include "Lending.h"


 istream& operator>>(istream& is, Lending & l)
{
	cout << "enter id name date item ";
	is >> l.id >> l.client >> l.date >> l.code;
	return is;
}




 ostream& operator<<(ostream& os, Lending & l)
{
	os << endl << "Lending details: id: " << l.id << " name: " << l.client << " date: " << l.date << " item: " << l.code << endl;
	return os;
}

  bool operator==(Lending& L1, Lending& L2)
 {
	 if (L1.id == L2.id && L1.client == L2.client && L1.date == L2.date)
		 return true;
	 return false;
 }

  bool operator!=(Lending& L1, Lending& L2)
  {
	  if (!(L1==L2))
		  return true;
	  return false;
  }

  bool operator<(Lending& L1, Lending& L2)
  {
		 if (L1.year() < L2.year())
			return true;
		  if (L1.year() > L2.year())
			  return false;

		  if (L1.month() < L2.month())
			  return true;
		  if (L1.month() > L2.month())
			  return false;

		  if (L1.day() < L2.day())
			  return true;
		  if (L1.day() > L2.day())
			  return false;

		  if (L1.code < L2.code)
			  return true;
		  if (L1.code > L2.code)
			 return false;

		  if (L1.id < L2.id)
			  return true;

		  return false;
  }

  bool operator>(Lending& L1, Lending& L2) 
  {
	  if (!(L1 < L2))
		  return true;
	  return false;
  }

  bool operator<=(Lending& L1, Lending& L2)
  {
	  if (L1 < L2 || L1 == L2)
		  return true;
	  return false;


  }
  bool operator>=(Lending& L1, Lending& L2)
  {
	  if (L1 > L2 || L1 == L2)
		  return true;
	  return false;


  }

  int Lending:: year()
  {
	  return date[6] * 1000 + date[7] * 100 + date[8] * 10 + date[9];
  }

  void Lending::set_date(string NewDate)
  {
	  date = NewDate;
  }
  
  int Lending::month()
  {
	  return  date[3] * 10 + date[4];
  }

  int Lending::day()
  {
	  return  date[0] * 10 + date[1];
  }

  