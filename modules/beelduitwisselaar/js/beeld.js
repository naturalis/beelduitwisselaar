<script type="text/javascript">
function setId(ele) {
  document.getElementById("edit-field-nlsr-und-0-value").value = ele;
  clear();
}

function setName(ele) {
  document.getElementById("edit-field-soort-taxon-und-0-value").value = ele;
  document.getElementById('group').value = ele;
  clear();
}

function clear() {
  document.getElementById('selectlijst').innerHTML='';
  document.getElementById('findout').src = '/sites/all/files/icon/ok.png';
}

function setSuggestionId(ele) {
      oFormObject = document.forms['formSearchFacetsSpecies'];

      if(oFormObject.elements["group"].value.length > 2) {

        $.getJSON("://soortenregister-development-001.cloud.naturalis.nl/linnaeus_ng/app/views/webservices/search.php?pid=1&start=1&text=" + oFormObject.elements["group"].value + "&max=1000&callback=?",
        {
            tagmode: "any",
            format: "json"
        }, function(data) {
            clear();
            $.each(data.results, function(i,item){
              $("<a href='#' onclick='setId(\"" + item.nsr_id + "\");setName(\"" + item.name + "\");clear();'>" + item.name + "</a><br />").appendTo("#selectlijst");
              if ( i == 10 ) return false;
            });
        });
      }
}

</script>


