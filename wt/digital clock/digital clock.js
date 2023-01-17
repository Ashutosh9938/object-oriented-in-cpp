function clock() {
    var d = new Date();
    var hours = d.getHours();
    var minutes = d.getMinutes();
    var seconds = d.getSeconds();
    var day = d.getDay();
    var date = d.getDate();
    var month = d.getMonth();
    var year = d.getFullYear();
    var days = [
      "Sunday",
      "Monday",
      "Tuesday",
      "Wednesday",
      "Thursday",
      "Friday",
      "Saturday",
    ];
    var months = [
      "January",
      "February",
      "March",
      "April",
      "May",
      "June",
      "July",
      "August",
      "September",
      "October",
      "November",
      "December",
    ];
    var meridiem = "AM";
    if (hours > 12) {
      hours = hours - 12;
      meridiem = "PM";
    }
    if (hours < 10) {
      hours = "0" + hours; // add zero in front of hours
    }
    if (minutes < 10) {
      minutes = "0" + minutes;
    }
    if (seconds < 10) {
      seconds = "0" + seconds;
    }
    document.getElementById("hour").innerHTML = hours;
    document.getElementById("minute").innerHTML = minutes;
    document.getElementById("second").innerHTML = seconds;
    document.getElementById("meridiem").innerHTML = meridiem;
    //document.getElementById('time').innerHTML = hours + ":" + minutes + ":" + seconds + " " + meridiem;
    document.getElementById("day").innerHTML =
      days[day] + ", " + date + " " + months[month] + " " + year;

    //setTimeout(clock, 1000);  //option 1
  }
  setInterval(clock, 1000); //option 2
  //clock();  option 1