<h1>Arduino RTC Timing Switch: Automated AC Appliance Control with DS3231 and Relay Module</h1>
<img src="https://i.postimg.cc/mgq8nCWs/Project-Thumbnail.jpg" alt="Project Thumbnail" style="max-width: 100%; height: auto;">
<h3>This project is compatible with various Arduino boards, and the connections are similar. I'm using Arduino Uno, but I've included connection diagrams for both Arduino Uno and Nano. Most Arduino boards share similar pin configurations refer to the provided connection diagrams.</h3>
<img src="https://i.postimg.cc/k4W1K4Zd/Arduino-Uno-Connection-Diagram.png" alt="Arduino Uno Connection Diagram" style="max-width: 100%; height: auto;">
<img src="https://i.postimg.cc/RhRgpY4s/Arduino-Nano-Connection-Diagram.png" alt="Arduino Nano Connection Diagram" style="max-width: 100%; height: auto;"><br>
<h1>Switching RTC Modules in Arduino:</h1>
<img src="https://i.postimg.cc/FsrWkhV2/Other-modules.jpg" alt="Other RTC Modules" style="max-width: 100%; height: auto;">
<img src="https://i.postimg.cc/KcVWrKJD/Difference.png" alt="Difference Between Why I am using these Codes for different module." style="max-width: 100%; height: auto;">

<h3>DS3231 Code (rtc.lostPower()):</h3> <h4>The DS3231 RTC module has a built-in feature to detect power loss, and this is checked using rtc.lostPower(). If power is lost, it indicates that the RTC might have been without power and could have lost its timekeeping information. In such cases, it adjusts the time using the compilation timestamp.</h4><br>

<h3>DS1307 Code (!rtc.isrunning()):</h3> <h4>The DS1307 RTC module lacks a direct method to check for power loss. Instead, it uses rtc.isrunning() to determine if the RTC is actively keeping time. If it's not running, it suggests that the RTC may not have power or may have lost its timekeeping ability. In this case, it adjusts the time using the compilation timestamp.
If you were to use either code for both RTC modules, there could be issues.</h4><br> 

<h3>For example:</h3>
<h4>* Using rtc.lostPower() with DS1307 might not work correctly because it doesn't have the lostPower feature.<br>
* Using !rtc.isrunning() with DS3231 might not effectively check for power loss, and you may miss cases where the DS3231 has lost power.</h4><br>

<h1><a href="https://www.youtube.com/watch?v=w8OTqcr_Fnw">Watch this video for Proper Instructions by clicking on the image.</a></h1>
<a href="https://www.youtube.com/watch?v=w8OTqcr_Fnw" target="_blank">
  <img src="https://i.postimg.cc/QCXYjqGt/Youtube-Thumbnail.jpg" alt="Youtube Video" style="max-width: 100%; height: auto;" />
</a>

<h3>When uploading the code in Arduino IDE, make sure to choose the correct board and COM port.</h3>
<img src="https://i.postimg.cc/W35YpKqB/Board-and-Com-port.jpg" alt="Select Board and Com Ports" style="max-width: 100%; height: auto;"><br>

<h2>About me:</h2>
<h1 align="center" href="https://git.io/typing-svg"><img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=30&pause=1000&color=F7DC00&center=true&vCenter=true&random=false&width=550&height=32&lines=Hi+%F0%9F%91%8B%2C+I'm+Mohamed+Shahil" alt="Typing SVG" /></h1>

<h3 align="center">A passionate software enthusiast diving into the exciting world of development!<br>
  <h4 align="center">🚀 As a recent graduate with a Diploma in ECE (2018),</h4> <h3 align="center">I am eager to establish a robust foundation in Software Development, focusing on Python, Java, C, and C++.<br>
  💡 My journey is just beginning, and I've already taken my first steps by creating a project.<br>
  🛠️ As a beginner, I'm committed to continuously enhancing my skills and contributing to the ever-evolving tech landscape.<br>
  🌐 I'm thrilled about the endless possibilities in software development and am dedicated to mastering the intricacies of coding.</h3>
  <h3 align="center">My goal is to build a solid skill set that not only meets industry standards but also pushes the boundaries of innovation.<br>
  📚 Lifelong learning is my mantra, and I believe in the power of collaboration. Let's connect, learn, and grow together on this coding adventure! 🤝 </h3>
  
 <h2 align="center"> #CodeNewbie #Python #Java #Cplusplus #SoftwareDevelopment #TechEnthusiast</h2>

<p align="left"> <img src="https://komarev.com/ghpvc/?username=mohamedshahilshajahan&label=Profile%20views&color=yellow&style=flat" alt="mohamedshahilshajahan" /> </p>
<img align="right" alt="Coding" width="400" src="https://cdn.dribbble.com/users/1162077/screenshots/3848914/programmer.gif">
- 📫 You can contact me at **mohamedshahilshajahan@gmail.com**

<h3 align="left">Connect with me:</h3>
<p align="left"> <a href="https://www.linkedin.com/in/mohamedshahilshajahan" target="_blank" rel="noreferrer"> <picture> <source media="(prefers-color-scheme: dark)" srcset="https://i.postimg.cc/02ZQ9ft7/linkedin-dark.png" /> <source media="(prefers-color-scheme: light)" srcset="https://i.postimg.cc/XvKFcFjL/linkedin.png" /> <img src="https://i.postimg.cc/XvKFcFjL/linkedin.png" width="35" height=auto />&nbsp; </picture> </a><a href="https://www.github.com/mohamedshahilshajahan" target="_blank" rel="noreferrer"> <picture> <source media="(prefers-color-scheme: dark)" srcset="https://i.postimg.cc/Bn6vbKyk/github-dark.png" /> <source media="(prefers-color-scheme: light)" srcset="https://i.postimg.cc/LsFL1vph/github.png" /> <img src="https://i.postimg.cc/LsFL1vph/github.png" width="32" height="32" /> </picture> </a> </p>

<h3 align="left">Languages and Tools:</h3>
<p align="left"> <img src="https://i.postimg.cc/DZdk7s4J/c.png" alt="c" width="40" height=auto/>&nbsp;&nbsp;<img src="https://i.postimg.cc/br37thTq/cplus.png" alt="cplusplus" width="40" height=auto/>&nbsp;&nbsp;<img src="https://i.postimg.cc/0jkgjQ7t/java.png" alt="java" width="40" height=auto/>&nbsp;&nbsp;<img src="https://i.postimg.cc/T20MSVXB/python.png" alt="python" width="40" height=auto/> </p>


