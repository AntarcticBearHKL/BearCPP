#include <iostream>
#include <fstream>
#include <boost/thread.hpp> 
#include <boost/filesystem.hpp> 
#include <boost/filesystem/fstream.hpp>

int main(int argc, char** argv){
	boost::filesystem::path p("E:\\tushare\\000003.SZ");
	std::cout << p;
	boost::filesystem::fstream::open(p);
}