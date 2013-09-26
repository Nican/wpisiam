<ul class="nav">
  <li<!--#if expr="$REQUEST_URI = $baseURI"--> class="active" <!--#endif -->>
    <a href="<!--#echo var="baseURI"-->">Home</a>
  </li>
  <li<!--#if expr="$REQUEST_URI = /events/"--> class="active" <!--#endif -->>
    <a href="<!--#echo var="baseURI"-->events/1314/">Events</a>
  </li>
  <li<!--#if expr="$REQUEST_URI = /officers/"--> class="active" <!--#endif -->>
    <a href="<!--#echo var="baseURI"-->officers.html">Officers</a>
  </li>
  <li<!--#if expr="$REQUEST_URI = /contact/"--> class="active" <!--#endif -->>
    <a href="<!--#echo var="baseURI"-->contact.html">Contact</a>
  </li>
  <li<!--#if expr="$REQUEST_URI = /constitution/"--> class="active" <!--#endif -->>
    <a href="<!--#echo var="baseURI"-->constitution.html">Constitution</a>
  </li>
  <!--
  <li class="dropdown">
    <a href="#" class="dropdown-toggle" data-toggle="dropdown">Dropdown <b class="caret"></b></a>
    <ul class="dropdown-menu">
      <li><a href="#">Action</a></li>
      <li><a href="#">Another action</a></li>
      <li><a href="#">Something else here</a></li>
      <li class="divider"></li>
      <li class="nav-header">Nav header</li>
      <li><a href="#">Separated link</a></li>
      <li><a href="#">One more separated link</a></li>
    </ul>
  </li> -->

</ul>