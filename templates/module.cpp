
#include <v8.h>
#include <node.h>
<% _.each(filenames, function(fname) { %>
#include "<%=fname%>.h" <% }) %>

using v8::Object;
using v8::Handle;

extern "C" {
  static void init (v8::Handle<Object> target)
  {<% _.each(clsnames, function(clsname) { %>
    <%=clsname%>::Init(target); <% }) %>
  }
  NODE_MODULE(<%=modulename%>, init);
}
