
{
  'targets' : [
    {
      'target_name' : '<%=modulename%>',
      'sources' : [ '<!@(ls -1 src/*.cpp)' ],
      'include_dirs' : [ 'inc' ]
    }
  ]
}
