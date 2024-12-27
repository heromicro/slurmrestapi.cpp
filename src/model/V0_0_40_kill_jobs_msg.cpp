/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_40_kill_jobs_msg.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_40_kill_jobs_msg::V0_0_40_kill_jobs_msg()
{
    m_Account = utility::conversions::to_string_t("");
    m_AccountIsSet = false;
    m_FlagsIsSet = false;
    m_Job_name = utility::conversions::to_string_t("");
    m_Job_nameIsSet = false;
    m_JobsIsSet = false;
    m_Partition = utility::conversions::to_string_t("");
    m_PartitionIsSet = false;
    m_Qos = utility::conversions::to_string_t("");
    m_QosIsSet = false;
    m_Reservation = utility::conversions::to_string_t("");
    m_ReservationIsSet = false;
    m_Signal = utility::conversions::to_string_t("");
    m_SignalIsSet = false;
    m_Job_stateIsSet = false;
    m_User_id = utility::conversions::to_string_t("");
    m_User_idIsSet = false;
    m_User_name = utility::conversions::to_string_t("");
    m_User_nameIsSet = false;
    m_Wckey = utility::conversions::to_string_t("");
    m_WckeyIsSet = false;
    m_NodesIsSet = false;
}

V0_0_40_kill_jobs_msg::~V0_0_40_kill_jobs_msg()
{
}

void V0_0_40_kill_jobs_msg::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_kill_jobs_msg::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AccountIsSet)
    {
        val[utility::conversions::to_string_t(U("account"))] = ModelBase::toJson(m_Account);
    }
    if(m_FlagsIsSet)
    {
        val[utility::conversions::to_string_t(U("flags"))] = ModelBase::toJson(m_Flags);
    }
    if(m_Job_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("job_name"))] = ModelBase::toJson(m_Job_name);
    }
    if(m_JobsIsSet)
    {
        val[utility::conversions::to_string_t(U("jobs"))] = ModelBase::toJson(m_Jobs);
    }
    if(m_PartitionIsSet)
    {
        val[utility::conversions::to_string_t(U("partition"))] = ModelBase::toJson(m_Partition);
    }
    if(m_QosIsSet)
    {
        val[utility::conversions::to_string_t(U("qos"))] = ModelBase::toJson(m_Qos);
    }
    if(m_ReservationIsSet)
    {
        val[utility::conversions::to_string_t(U("reservation"))] = ModelBase::toJson(m_Reservation);
    }
    if(m_SignalIsSet)
    {
        val[utility::conversions::to_string_t(U("signal"))] = ModelBase::toJson(m_Signal);
    }
    if(m_Job_stateIsSet)
    {
        val[utility::conversions::to_string_t(U("job_state"))] = ModelBase::toJson(m_Job_state);
    }
    if(m_User_idIsSet)
    {
        val[utility::conversions::to_string_t(U("user_id"))] = ModelBase::toJson(m_User_id);
    }
    if(m_User_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("user_name"))] = ModelBase::toJson(m_User_name);
    }
    if(m_WckeyIsSet)
    {
        val[utility::conversions::to_string_t(U("wckey"))] = ModelBase::toJson(m_Wckey);
    }
    if(m_NodesIsSet)
    {
        val[utility::conversions::to_string_t(U("nodes"))] = ModelBase::toJson(m_Nodes);
    }

    return val;
}

bool V0_0_40_kill_jobs_msg::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("account"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("account")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAccount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccount);
            setAccount(refVal_setAccount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("flags"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("flags")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setFlags;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFlags);
            setFlags(refVal_setFlags);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("job_name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("job_name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setJobName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setJobName);
            setJobName(refVal_setJobName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("jobs"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("jobs")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setJobs;
            ok &= ModelBase::fromJson(fieldValue, refVal_setJobs);
            setJobs(refVal_setJobs);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("partition"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("partition")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPartition;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPartition);
            setPartition(refVal_setPartition);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("qos"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("qos")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setQos;
            ok &= ModelBase::fromJson(fieldValue, refVal_setQos);
            setQos(refVal_setQos);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("reservation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("reservation")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setReservation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReservation);
            setReservation(refVal_setReservation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("signal"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("signal")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSignal;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSignal);
            setSignal(refVal_setSignal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("job_state"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("job_state")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setJobState;
            ok &= ModelBase::fromJson(fieldValue, refVal_setJobState);
            setJobState(refVal_setJobState);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("user_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("user_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserId);
            setUserId(refVal_setUserId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("user_name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("user_name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUserName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserName);
            setUserName(refVal_setUserName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("wckey"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("wckey")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setWckey;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWckey);
            setWckey(refVal_setWckey);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("nodes"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("nodes")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setNodes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNodes);
            setNodes(refVal_setNodes);
        }
    }
    return ok;
}

void V0_0_40_kill_jobs_msg::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_AccountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("account")), m_Account));
    }
    if(m_FlagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("flags")), m_Flags));
    }
    if(m_Job_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("job_name")), m_Job_name));
    }
    if(m_JobsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("jobs")), m_Jobs));
    }
    if(m_PartitionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("partition")), m_Partition));
    }
    if(m_QosIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("qos")), m_Qos));
    }
    if(m_ReservationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("reservation")), m_Reservation));
    }
    if(m_SignalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("signal")), m_Signal));
    }
    if(m_Job_stateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("job_state")), m_Job_state));
    }
    if(m_User_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("user_id")), m_User_id));
    }
    if(m_User_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("user_name")), m_User_name));
    }
    if(m_WckeyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("wckey")), m_Wckey));
    }
    if(m_NodesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("nodes")), m_Nodes));
    }
}

bool V0_0_40_kill_jobs_msg::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("account"))))
    {
        utility::string_t refVal_setAccount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("account"))), refVal_setAccount );
        setAccount(refVal_setAccount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("flags"))))
    {
        std::vector<utility::string_t> refVal_setFlags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("flags"))), refVal_setFlags );
        setFlags(refVal_setFlags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("job_name"))))
    {
        utility::string_t refVal_setJobName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("job_name"))), refVal_setJobName );
        setJobName(refVal_setJobName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("jobs"))))
    {
        std::vector<utility::string_t> refVal_setJobs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("jobs"))), refVal_setJobs );
        setJobs(refVal_setJobs);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("partition"))))
    {
        utility::string_t refVal_setPartition;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("partition"))), refVal_setPartition );
        setPartition(refVal_setPartition);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("qos"))))
    {
        utility::string_t refVal_setQos;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("qos"))), refVal_setQos );
        setQos(refVal_setQos);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("reservation"))))
    {
        utility::string_t refVal_setReservation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("reservation"))), refVal_setReservation );
        setReservation(refVal_setReservation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("signal"))))
    {
        utility::string_t refVal_setSignal;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("signal"))), refVal_setSignal );
        setSignal(refVal_setSignal);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("job_state"))))
    {
        std::vector<utility::string_t> refVal_setJobState;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("job_state"))), refVal_setJobState );
        setJobState(refVal_setJobState);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("user_id"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("user_id"))), refVal_setUserId );
        setUserId(refVal_setUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("user_name"))))
    {
        utility::string_t refVal_setUserName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("user_name"))), refVal_setUserName );
        setUserName(refVal_setUserName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("wckey"))))
    {
        utility::string_t refVal_setWckey;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("wckey"))), refVal_setWckey );
        setWckey(refVal_setWckey);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("nodes"))))
    {
        std::vector<utility::string_t> refVal_setNodes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("nodes"))), refVal_setNodes );
        setNodes(refVal_setNodes);
    }
    return ok;
}

utility::string_t V0_0_40_kill_jobs_msg::getAccount() const
{
    return m_Account;
}

void V0_0_40_kill_jobs_msg::setAccount(const utility::string_t& value)
{
    m_Account = value;
    m_AccountIsSet = true;
}

bool V0_0_40_kill_jobs_msg::accountIsSet() const
{
    return m_AccountIsSet;
}

void V0_0_40_kill_jobs_msg::unsetAccount()
{
    m_AccountIsSet = false;
}
std::vector<utility::string_t>& V0_0_40_kill_jobs_msg::getFlags()
{
    return m_Flags;
}

void V0_0_40_kill_jobs_msg::setFlags(const std::vector<utility::string_t>& value)
{
    m_Flags = value;
    m_FlagsIsSet = true;
}

bool V0_0_40_kill_jobs_msg::flagsIsSet() const
{
    return m_FlagsIsSet;
}

void V0_0_40_kill_jobs_msg::unsetFlags()
{
    m_FlagsIsSet = false;
}
utility::string_t V0_0_40_kill_jobs_msg::getJobName() const
{
    return m_Job_name;
}

void V0_0_40_kill_jobs_msg::setJobName(const utility::string_t& value)
{
    m_Job_name = value;
    m_Job_nameIsSet = true;
}

bool V0_0_40_kill_jobs_msg::jobNameIsSet() const
{
    return m_Job_nameIsSet;
}

void V0_0_40_kill_jobs_msg::unsetJob_name()
{
    m_Job_nameIsSet = false;
}
std::vector<utility::string_t>& V0_0_40_kill_jobs_msg::getJobs()
{
    return m_Jobs;
}

void V0_0_40_kill_jobs_msg::setJobs(const std::vector<utility::string_t>& value)
{
    m_Jobs = value;
    m_JobsIsSet = true;
}

bool V0_0_40_kill_jobs_msg::jobsIsSet() const
{
    return m_JobsIsSet;
}

void V0_0_40_kill_jobs_msg::unsetJobs()
{
    m_JobsIsSet = false;
}
utility::string_t V0_0_40_kill_jobs_msg::getPartition() const
{
    return m_Partition;
}

void V0_0_40_kill_jobs_msg::setPartition(const utility::string_t& value)
{
    m_Partition = value;
    m_PartitionIsSet = true;
}

bool V0_0_40_kill_jobs_msg::partitionIsSet() const
{
    return m_PartitionIsSet;
}

void V0_0_40_kill_jobs_msg::unsetPartition()
{
    m_PartitionIsSet = false;
}
utility::string_t V0_0_40_kill_jobs_msg::getQos() const
{
    return m_Qos;
}

void V0_0_40_kill_jobs_msg::setQos(const utility::string_t& value)
{
    m_Qos = value;
    m_QosIsSet = true;
}

bool V0_0_40_kill_jobs_msg::qosIsSet() const
{
    return m_QosIsSet;
}

void V0_0_40_kill_jobs_msg::unsetQos()
{
    m_QosIsSet = false;
}
utility::string_t V0_0_40_kill_jobs_msg::getReservation() const
{
    return m_Reservation;
}

void V0_0_40_kill_jobs_msg::setReservation(const utility::string_t& value)
{
    m_Reservation = value;
    m_ReservationIsSet = true;
}

bool V0_0_40_kill_jobs_msg::reservationIsSet() const
{
    return m_ReservationIsSet;
}

void V0_0_40_kill_jobs_msg::unsetReservation()
{
    m_ReservationIsSet = false;
}
utility::string_t V0_0_40_kill_jobs_msg::getSignal() const
{
    return m_Signal;
}

void V0_0_40_kill_jobs_msg::setSignal(const utility::string_t& value)
{
    m_Signal = value;
    m_SignalIsSet = true;
}

bool V0_0_40_kill_jobs_msg::signalIsSet() const
{
    return m_SignalIsSet;
}

void V0_0_40_kill_jobs_msg::unsetSignal()
{
    m_SignalIsSet = false;
}
std::vector<utility::string_t>& V0_0_40_kill_jobs_msg::getJobState()
{
    return m_Job_state;
}

void V0_0_40_kill_jobs_msg::setJobState(const std::vector<utility::string_t>& value)
{
    m_Job_state = value;
    m_Job_stateIsSet = true;
}

bool V0_0_40_kill_jobs_msg::jobStateIsSet() const
{
    return m_Job_stateIsSet;
}

void V0_0_40_kill_jobs_msg::unsetJob_state()
{
    m_Job_stateIsSet = false;
}
utility::string_t V0_0_40_kill_jobs_msg::getUserId() const
{
    return m_User_id;
}

void V0_0_40_kill_jobs_msg::setUserId(const utility::string_t& value)
{
    m_User_id = value;
    m_User_idIsSet = true;
}

bool V0_0_40_kill_jobs_msg::userIdIsSet() const
{
    return m_User_idIsSet;
}

void V0_0_40_kill_jobs_msg::unsetUser_id()
{
    m_User_idIsSet = false;
}
utility::string_t V0_0_40_kill_jobs_msg::getUserName() const
{
    return m_User_name;
}

void V0_0_40_kill_jobs_msg::setUserName(const utility::string_t& value)
{
    m_User_name = value;
    m_User_nameIsSet = true;
}

bool V0_0_40_kill_jobs_msg::userNameIsSet() const
{
    return m_User_nameIsSet;
}

void V0_0_40_kill_jobs_msg::unsetUser_name()
{
    m_User_nameIsSet = false;
}
utility::string_t V0_0_40_kill_jobs_msg::getWckey() const
{
    return m_Wckey;
}

void V0_0_40_kill_jobs_msg::setWckey(const utility::string_t& value)
{
    m_Wckey = value;
    m_WckeyIsSet = true;
}

bool V0_0_40_kill_jobs_msg::wckeyIsSet() const
{
    return m_WckeyIsSet;
}

void V0_0_40_kill_jobs_msg::unsetWckey()
{
    m_WckeyIsSet = false;
}
std::vector<utility::string_t>& V0_0_40_kill_jobs_msg::getNodes()
{
    return m_Nodes;
}

void V0_0_40_kill_jobs_msg::setNodes(const std::vector<utility::string_t>& value)
{
    m_Nodes = value;
    m_NodesIsSet = true;
}

bool V0_0_40_kill_jobs_msg::nodesIsSet() const
{
    return m_NodesIsSet;
}

void V0_0_40_kill_jobs_msg::unsetNodes()
{
    m_NodesIsSet = false;
}
}
}
}
}

