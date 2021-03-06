
#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ nestedclass; 

#pragma link C++ class std::vector<std::vector<int> >+; 
#pragma link C++ class std::vector<std::vector<unsigned int> >+;
#pragma link C++ class std::vector<std::vector<long> >+;
#pragma link C++ class std::vector<std::vector<unsigned long> >+;
#pragma link C++ class std::vector<std::vector<float> >+;
#pragma link C++ class std::vector<std::vector<double> >+;
#pragma link C++ class std::vector<std::string>+;
#pragma link C++ class std::vector<std::vector<std::string> >+;
#pragma link C++ class std::vector<float>+;
#pragma link C++ class std::map<std::string, int> >+; 


#endif // __CINT__
