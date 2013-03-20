
#ifndef <%=headermarker%>
#define <%=headermarker%>

using v8::Persistent;
using v8:FunctionTemplate;
using v8::Local;
using v8::HandleScope;
using v8::Object;
using v8::String;
using v8::Value;
using v8::Arguments;
using v8::Handle;
using v8::Undefined;
using v8::ThrowException;
using v8::Exception;
using node::ObjectWrap;

class <%=clsname%> : ObjectWrap {

private:

public:
  static Persistent<FunctionTemplate> s_ct;

  <%=clsname%>();
  ~<%=clsname%>();

  static void Init(Handle<Object> target);
  static Handle<Value> New(const Arguments& args);

};

#endif // <%=headermarker%>
