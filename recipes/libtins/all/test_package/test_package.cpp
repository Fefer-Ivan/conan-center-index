#include <iostream>
#include <tins/tins.h>

using namespace Tins;
using namespace std;

int main() {
  SnifferConfiguration config;
  config.set_filter("port 80");
  config.set_promisc_mode(true);
  config.set_snap_len(400);
}
