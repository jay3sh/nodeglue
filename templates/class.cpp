
#include "<%=headername%>.h"

<%=clsname%>::<%=clsname%> {
}

<%=clsname%>::~<%=clsname%> {
}

void <%=clsname%>::Init(Handle<Object> target) {
  Local<FunctionTemplate> t = FunctionTemplate::New(New);
  s_ct = Persistent<FunctionTemplate>::New(t);

  s_ct->InstanceTemplate()->SetInternalFieldCount(1);
  s_ct->SetClassName(String::NewSymbol("<%=clsname%>"));

  target->Set(String::NewSymbol("<%=clsname%>"), s_ct->GetFunction());
}

Handle<Value> <%=clsname%>::New(const Arguments& args) {
  HandleScope scope;

  <%=clsname%> *instance = new <%=clsname%>;

  instance->Wrap(args.This());
  return args.This();
}

Persistent<FunctionTemplate> <%=clsname%>::s_ct;

