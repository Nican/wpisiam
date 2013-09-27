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
  <li<!--#if expr="$REQUEST_URI = /constitution/"--> class="active" <!--#endif -->>
    <a href="<!--#echo var="baseURI"-->constitution.html">Constitution</a>
  </li>
  <li<!--#if expr="$REQUEST_URI = /resources/"--> class="active" <!--#endif -->>
    <a href="<!--#echo var="baseURI"-->resources.html">Constitution</a>
  </li>

</ul>