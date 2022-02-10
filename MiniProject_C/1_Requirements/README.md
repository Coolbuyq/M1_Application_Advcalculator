# Requirements

## Introduction
The deployment of covid-19 vaccines in India changed into executed in a unexpected burst and hence the monitoring have become very complicated. Due to more than one enter and output instructions at the server, it led to numerous gradual going for walks problems and crashes. The Aadhar information had been used to allot the vaccines and as a result it operated on a principal server. To keep away from using principal server for all commmands, a nearby server can be loaded with the vaccine-registered statistics. Local verification and final touch of vaccination statistics can be processed domestically and can be loaded lower back to the primary server with the aid of using the quit of day.

Each vaccine centre will perform domestically to sign in and allot vaccines. The primary registration may be executed on-line and schedules are set as favored with the aid of using the patient. Assuming a vaccination centre can vaccinate round one hundred humans in a day. The statistics coping with for on-line primary registration can be basically executed withinside the day time and the statistics received with the aid of using the nearby centres of vaccinated humans may be dealt with withinside the night.

The nearby server have to save the statistics of round one hundred humans in which the allotted on-line registration statistics can be loaded onto the nearby server of that nearby centre. Verification of the statistics is executed primarily based totally at the information furnished with the aid of using the patient. Once completed, the statistics of the vaccinated can be despatched lower back for destiny use and reference.

## High level Requirements

| ID | Description | Status (Implemented/Future) |
| --- | --- | --- |
| HR01 |System ought to be capable of get right of entry to pre loaded registration records for verification | Implemented |
| HR02 | User ought to be capable of upload new registrations | Implemented |
| HR03 |System ought to understand vaccinated patients  | Implemented |
| HR04 |OTP generated verification for stable registration | Future |
| HR05 |System ought to understand invalid credentials | Future |
| HR06 |System should be updated with the time interval between twoo doses.  | Future |


## Low level Requirements

| ID | Description | Status (Implemented/Future) |
| --- | --- | --- |
| LR01 |Only new person need to accept an choice to pick vaccine type  | Implemented |
| LR02 |Total amount of vaccines used need to be proven via way of means of EOD  | Implemented |
| LR03 |Full listing of sufferers vaccinated need to be set as output | Implemented |
| LR04 |Remaining and present stock of vaccines must be be tracked  | Future |
| LR05 |Vaccine vials need to be tracked for its use inside a day  | Future |

## SWOT
![SWOT Analysis](https://user-images.githubusercontent.com/86889916/153326600-0d5e6615-3e66-4858-8b7a-74f777477b70.png)

## 4W's & 1H

 ### Who
   Patient who needs to be vaccinated.
 
 ### What 
   Verify the info of the affected person the usage of the alloted data.
  
 ### When
   During the time alloted for vaccination. 
   
 ### Where
   Local vaccine centre
    
 ### How
   Online registration and on field verification using local server.
   
   

