# Secured and Monitored Web Infrastructure

<a href ="https://miro.com/app/board/ypNWAPx=/">Visit Board</a>

# Description
This is a 3-server web infrastructure that is secured, monitored, and serves encrypted traffic.

# Specifics About This Infrastructure
<li>
The purpose of the firewalls.
The firewalls are for protecting the network (web servers, anyway) from unwanted and unauthorized users by acting as an intermediary between the internal network and the external network and blocking the incoming traffic matching the aforementioned criteria.
firewalls are also useful for allowing remote access to a private network through secure authentication certificates and logins.
</li>

<li>The purpose of the SSL certificate.
The SSL certificate is for encrypting the traffic between the web servers and the external network to prevent man-in-the-middle attacks (MITM) and network sniffers from sniffing the traffic which could expose valuable information. The SSL certs ensure privacy, integrity, and identification.</li>

<li>
The purpose of the monitoring clients.
The monitoring clients are for monitoring the servers and the external network. Software monitoring will watch computer metrics, record them, and emit an alert if something is unusual or that could make the computer not work properly happens. The monitoring tool observes the servers and provides key metrics about the servers' operations to the administrators. It automatically tests the accessibility of the servers, measures response time, and alerts for errors such as corrupt/missing files, security vulnerabilities/violations, and many other issues.
</li>

# Issues With This Infrastructure
<li>
Terminating SSL at the load balancer level would leave the traffic between the load balancer and the web servers unencrypted.</li>

<li>
Having one MySQL server is an issue because it is not scalable and can act as a single point of failure for the web infrastructure.
</li>

<li>
Having servers with all the same components would make the components contend for resources on the server like CPU, Memory, I/O, etc., which can lead to poor performance and also make it difficult to locate the source of the problem. A setup such as this is not easily scalable.</li>

</ul>
