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



#include "slurmrestapi/model/V0_0_41_openapi_reservation_resp_reservations_inner.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_41_openapi_reservation_resp_reservations_inner::V0_0_41_openapi_reservation_resp_reservations_inner()
{
    m_Accounts = utility::conversions::to_string_t("");
    m_AccountsIsSet = false;
    m_Burst_buffer = utility::conversions::to_string_t("");
    m_Burst_bufferIsSet = false;
    m_Core_count = 0;
    m_Core_countIsSet = false;
    m_Core_specializationsIsSet = false;
    m_End_timeIsSet = false;
    m_Features = utility::conversions::to_string_t("");
    m_FeaturesIsSet = false;
    m_FlagsIsSet = false;
    m_Groups = utility::conversions::to_string_t("");
    m_GroupsIsSet = false;
    m_Licenses = utility::conversions::to_string_t("");
    m_LicensesIsSet = false;
    m_Max_start_delay = 0;
    m_Max_start_delayIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Node_count = 0;
    m_Node_countIsSet = false;
    m_Node_list = utility::conversions::to_string_t("");
    m_Node_listIsSet = false;
    m_Partition = utility::conversions::to_string_t("");
    m_PartitionIsSet = false;
    m_Purge_completedIsSet = false;
    m_Start_timeIsSet = false;
    m_WattsIsSet = false;
    m_Tres = utility::conversions::to_string_t("");
    m_TresIsSet = false;
    m_Users = utility::conversions::to_string_t("");
    m_UsersIsSet = false;
}

V0_0_41_openapi_reservation_resp_reservations_inner::~V0_0_41_openapi_reservation_resp_reservations_inner()
{
}

void V0_0_41_openapi_reservation_resp_reservations_inner::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_reservation_resp_reservations_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AccountsIsSet)
    {
        val[utility::conversions::to_string_t(U("accounts"))] = ModelBase::toJson(m_Accounts);
    }
    if(m_Burst_bufferIsSet)
    {
        val[utility::conversions::to_string_t(U("burst_buffer"))] = ModelBase::toJson(m_Burst_buffer);
    }
    if(m_Core_countIsSet)
    {
        val[utility::conversions::to_string_t(U("core_count"))] = ModelBase::toJson(m_Core_count);
    }
    if(m_Core_specializationsIsSet)
    {
        val[utility::conversions::to_string_t(U("core_specializations"))] = ModelBase::toJson(m_Core_specializations);
    }
    if(m_End_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("end_time"))] = ModelBase::toJson(m_End_time);
    }
    if(m_FeaturesIsSet)
    {
        val[utility::conversions::to_string_t(U("features"))] = ModelBase::toJson(m_Features);
    }
    if(m_FlagsIsSet)
    {
        val[utility::conversions::to_string_t(U("flags"))] = ModelBase::toJson(m_Flags);
    }
    if(m_GroupsIsSet)
    {
        val[utility::conversions::to_string_t(U("groups"))] = ModelBase::toJson(m_Groups);
    }
    if(m_LicensesIsSet)
    {
        val[utility::conversions::to_string_t(U("licenses"))] = ModelBase::toJson(m_Licenses);
    }
    if(m_Max_start_delayIsSet)
    {
        val[utility::conversions::to_string_t(U("max_start_delay"))] = ModelBase::toJson(m_Max_start_delay);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_Node_countIsSet)
    {
        val[utility::conversions::to_string_t(U("node_count"))] = ModelBase::toJson(m_Node_count);
    }
    if(m_Node_listIsSet)
    {
        val[utility::conversions::to_string_t(U("node_list"))] = ModelBase::toJson(m_Node_list);
    }
    if(m_PartitionIsSet)
    {
        val[utility::conversions::to_string_t(U("partition"))] = ModelBase::toJson(m_Partition);
    }
    if(m_Purge_completedIsSet)
    {
        val[utility::conversions::to_string_t(U("purge_completed"))] = ModelBase::toJson(m_Purge_completed);
    }
    if(m_Start_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("start_time"))] = ModelBase::toJson(m_Start_time);
    }
    if(m_WattsIsSet)
    {
        val[utility::conversions::to_string_t(U("watts"))] = ModelBase::toJson(m_Watts);
    }
    if(m_TresIsSet)
    {
        val[utility::conversions::to_string_t(U("tres"))] = ModelBase::toJson(m_Tres);
    }
    if(m_UsersIsSet)
    {
        val[utility::conversions::to_string_t(U("users"))] = ModelBase::toJson(m_Users);
    }

    return val;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("accounts"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accounts")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAccounts;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccounts);
            setAccounts(refVal_setAccounts);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("burst_buffer"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("burst_buffer")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBurstBuffer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBurstBuffer);
            setBurstBuffer(refVal_setBurstBuffer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("core_count"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("core_count")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setCoreCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCoreCount);
            setCoreCount(refVal_setCoreCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("core_specializations"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("core_specializations")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_core_specializations_inner>> refVal_setCoreSpecializations;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCoreSpecializations);
            setCoreSpecializations(refVal_setCoreSpecializations);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("end_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("end_time")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_end_time> refVal_setEndTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEndTime);
            setEndTime(refVal_setEndTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("features"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("features")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFeatures;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFeatures);
            setFeatures(refVal_setFeatures);
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
    if(val.has_field(utility::conversions::to_string_t(U("groups"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("groups")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setGroups;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGroups);
            setGroups(refVal_setGroups);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("licenses"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("licenses")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setLicenses;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLicenses);
            setLicenses(refVal_setLicenses);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("max_start_delay"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("max_start_delay")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setMaxStartDelay;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxStartDelay);
            setMaxStartDelay(refVal_setMaxStartDelay);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("node_count"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("node_count")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setNodeCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNodeCount);
            setNodeCount(refVal_setNodeCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("node_list"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("node_list")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setNodeList;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNodeList);
            setNodeList(refVal_setNodeList);
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
    if(val.has_field(utility::conversions::to_string_t(U("purge_completed"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("purge_completed")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_purge_completed> refVal_setPurgeCompleted;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPurgeCompleted);
            setPurgeCompleted(refVal_setPurgeCompleted);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("start_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("start_time")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_start_time> refVal_setStartTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStartTime);
            setStartTime(refVal_setStartTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("watts"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("watts")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_watts> refVal_setWatts;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWatts);
            setWatts(refVal_setWatts);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tres"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tres")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTres;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTres);
            setTres(refVal_setTres);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("users"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("users")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUsers;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUsers);
            setUsers(refVal_setUsers);
        }
    }
    return ok;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_AccountsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accounts")), m_Accounts));
    }
    if(m_Burst_bufferIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("burst_buffer")), m_Burst_buffer));
    }
    if(m_Core_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("core_count")), m_Core_count));
    }
    if(m_Core_specializationsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("core_specializations")), m_Core_specializations));
    }
    if(m_End_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("end_time")), m_End_time));
    }
    if(m_FeaturesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("features")), m_Features));
    }
    if(m_FlagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("flags")), m_Flags));
    }
    if(m_GroupsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("groups")), m_Groups));
    }
    if(m_LicensesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("licenses")), m_Licenses));
    }
    if(m_Max_start_delayIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("max_start_delay")), m_Max_start_delay));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_Node_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("node_count")), m_Node_count));
    }
    if(m_Node_listIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("node_list")), m_Node_list));
    }
    if(m_PartitionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("partition")), m_Partition));
    }
    if(m_Purge_completedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("purge_completed")), m_Purge_completed));
    }
    if(m_Start_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("start_time")), m_Start_time));
    }
    if(m_WattsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("watts")), m_Watts));
    }
    if(m_TresIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tres")), m_Tres));
    }
    if(m_UsersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("users")), m_Users));
    }
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("accounts"))))
    {
        utility::string_t refVal_setAccounts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accounts"))), refVal_setAccounts );
        setAccounts(refVal_setAccounts);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("burst_buffer"))))
    {
        utility::string_t refVal_setBurstBuffer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("burst_buffer"))), refVal_setBurstBuffer );
        setBurstBuffer(refVal_setBurstBuffer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("core_count"))))
    {
        int32_t refVal_setCoreCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("core_count"))), refVal_setCoreCount );
        setCoreCount(refVal_setCoreCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("core_specializations"))))
    {
        std::vector<std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_core_specializations_inner>> refVal_setCoreSpecializations;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("core_specializations"))), refVal_setCoreSpecializations );
        setCoreSpecializations(refVal_setCoreSpecializations);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("end_time"))))
    {
        std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_end_time> refVal_setEndTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("end_time"))), refVal_setEndTime );
        setEndTime(refVal_setEndTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("features"))))
    {
        utility::string_t refVal_setFeatures;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("features"))), refVal_setFeatures );
        setFeatures(refVal_setFeatures);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("flags"))))
    {
        std::vector<utility::string_t> refVal_setFlags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("flags"))), refVal_setFlags );
        setFlags(refVal_setFlags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("groups"))))
    {
        utility::string_t refVal_setGroups;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("groups"))), refVal_setGroups );
        setGroups(refVal_setGroups);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("licenses"))))
    {
        utility::string_t refVal_setLicenses;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("licenses"))), refVal_setLicenses );
        setLicenses(refVal_setLicenses);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("max_start_delay"))))
    {
        int32_t refVal_setMaxStartDelay;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("max_start_delay"))), refVal_setMaxStartDelay );
        setMaxStartDelay(refVal_setMaxStartDelay);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("node_count"))))
    {
        int32_t refVal_setNodeCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("node_count"))), refVal_setNodeCount );
        setNodeCount(refVal_setNodeCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("node_list"))))
    {
        utility::string_t refVal_setNodeList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("node_list"))), refVal_setNodeList );
        setNodeList(refVal_setNodeList);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("partition"))))
    {
        utility::string_t refVal_setPartition;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("partition"))), refVal_setPartition );
        setPartition(refVal_setPartition);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("purge_completed"))))
    {
        std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_purge_completed> refVal_setPurgeCompleted;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("purge_completed"))), refVal_setPurgeCompleted );
        setPurgeCompleted(refVal_setPurgeCompleted);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("start_time"))))
    {
        std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_start_time> refVal_setStartTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("start_time"))), refVal_setStartTime );
        setStartTime(refVal_setStartTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("watts"))))
    {
        std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_watts> refVal_setWatts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("watts"))), refVal_setWatts );
        setWatts(refVal_setWatts);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tres"))))
    {
        utility::string_t refVal_setTres;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tres"))), refVal_setTres );
        setTres(refVal_setTres);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("users"))))
    {
        utility::string_t refVal_setUsers;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("users"))), refVal_setUsers );
        setUsers(refVal_setUsers);
    }
    return ok;
}

utility::string_t V0_0_41_openapi_reservation_resp_reservations_inner::getAccounts() const
{
    return m_Accounts;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setAccounts(const utility::string_t& value)
{
    m_Accounts = value;
    m_AccountsIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::accountsIsSet() const
{
    return m_AccountsIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetAccounts()
{
    m_AccountsIsSet = false;
}
utility::string_t V0_0_41_openapi_reservation_resp_reservations_inner::getBurstBuffer() const
{
    return m_Burst_buffer;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setBurstBuffer(const utility::string_t& value)
{
    m_Burst_buffer = value;
    m_Burst_bufferIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::burstBufferIsSet() const
{
    return m_Burst_bufferIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetBurst_buffer()
{
    m_Burst_bufferIsSet = false;
}
int32_t V0_0_41_openapi_reservation_resp_reservations_inner::getCoreCount() const
{
    return m_Core_count;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setCoreCount(int32_t value)
{
    m_Core_count = value;
    m_Core_countIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::coreCountIsSet() const
{
    return m_Core_countIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetCore_count()
{
    m_Core_countIsSet = false;
}
std::vector<std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_core_specializations_inner>>& V0_0_41_openapi_reservation_resp_reservations_inner::getCoreSpecializations()
{
    return m_Core_specializations;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setCoreSpecializations(const std::vector<std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_core_specializations_inner>>& value)
{
    m_Core_specializations = value;
    m_Core_specializationsIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::coreSpecializationsIsSet() const
{
    return m_Core_specializationsIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetCore_specializations()
{
    m_Core_specializationsIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_end_time> V0_0_41_openapi_reservation_resp_reservations_inner::getEndTime() const
{
    return m_End_time;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setEndTime(const std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_end_time>& value)
{
    m_End_time = value;
    m_End_timeIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::endTimeIsSet() const
{
    return m_End_timeIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetEnd_time()
{
    m_End_timeIsSet = false;
}
utility::string_t V0_0_41_openapi_reservation_resp_reservations_inner::getFeatures() const
{
    return m_Features;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setFeatures(const utility::string_t& value)
{
    m_Features = value;
    m_FeaturesIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::featuresIsSet() const
{
    return m_FeaturesIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetFeatures()
{
    m_FeaturesIsSet = false;
}
std::vector<utility::string_t>& V0_0_41_openapi_reservation_resp_reservations_inner::getFlags()
{
    return m_Flags;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setFlags(const std::vector<utility::string_t>& value)
{
    m_Flags = value;
    m_FlagsIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::flagsIsSet() const
{
    return m_FlagsIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetFlags()
{
    m_FlagsIsSet = false;
}
utility::string_t V0_0_41_openapi_reservation_resp_reservations_inner::getGroups() const
{
    return m_Groups;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setGroups(const utility::string_t& value)
{
    m_Groups = value;
    m_GroupsIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::groupsIsSet() const
{
    return m_GroupsIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetGroups()
{
    m_GroupsIsSet = false;
}
utility::string_t V0_0_41_openapi_reservation_resp_reservations_inner::getLicenses() const
{
    return m_Licenses;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setLicenses(const utility::string_t& value)
{
    m_Licenses = value;
    m_LicensesIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::licensesIsSet() const
{
    return m_LicensesIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetLicenses()
{
    m_LicensesIsSet = false;
}
int32_t V0_0_41_openapi_reservation_resp_reservations_inner::getMaxStartDelay() const
{
    return m_Max_start_delay;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setMaxStartDelay(int32_t value)
{
    m_Max_start_delay = value;
    m_Max_start_delayIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::maxStartDelayIsSet() const
{
    return m_Max_start_delayIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetMax_start_delay()
{
    m_Max_start_delayIsSet = false;
}
utility::string_t V0_0_41_openapi_reservation_resp_reservations_inner::getName() const
{
    return m_Name;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::nameIsSet() const
{
    return m_NameIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetName()
{
    m_NameIsSet = false;
}
int32_t V0_0_41_openapi_reservation_resp_reservations_inner::getNodeCount() const
{
    return m_Node_count;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setNodeCount(int32_t value)
{
    m_Node_count = value;
    m_Node_countIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::nodeCountIsSet() const
{
    return m_Node_countIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetNode_count()
{
    m_Node_countIsSet = false;
}
utility::string_t V0_0_41_openapi_reservation_resp_reservations_inner::getNodeList() const
{
    return m_Node_list;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setNodeList(const utility::string_t& value)
{
    m_Node_list = value;
    m_Node_listIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::nodeListIsSet() const
{
    return m_Node_listIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetNode_list()
{
    m_Node_listIsSet = false;
}
utility::string_t V0_0_41_openapi_reservation_resp_reservations_inner::getPartition() const
{
    return m_Partition;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setPartition(const utility::string_t& value)
{
    m_Partition = value;
    m_PartitionIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::partitionIsSet() const
{
    return m_PartitionIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetPartition()
{
    m_PartitionIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_purge_completed> V0_0_41_openapi_reservation_resp_reservations_inner::getPurgeCompleted() const
{
    return m_Purge_completed;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setPurgeCompleted(const std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_purge_completed>& value)
{
    m_Purge_completed = value;
    m_Purge_completedIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::purgeCompletedIsSet() const
{
    return m_Purge_completedIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetPurge_completed()
{
    m_Purge_completedIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_start_time> V0_0_41_openapi_reservation_resp_reservations_inner::getStartTime() const
{
    return m_Start_time;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setStartTime(const std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_start_time>& value)
{
    m_Start_time = value;
    m_Start_timeIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::startTimeIsSet() const
{
    return m_Start_timeIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetStart_time()
{
    m_Start_timeIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_watts> V0_0_41_openapi_reservation_resp_reservations_inner::getWatts() const
{
    return m_Watts;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setWatts(const std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_watts>& value)
{
    m_Watts = value;
    m_WattsIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::wattsIsSet() const
{
    return m_WattsIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetWatts()
{
    m_WattsIsSet = false;
}
utility::string_t V0_0_41_openapi_reservation_resp_reservations_inner::getTres() const
{
    return m_Tres;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setTres(const utility::string_t& value)
{
    m_Tres = value;
    m_TresIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::tresIsSet() const
{
    return m_TresIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetTres()
{
    m_TresIsSet = false;
}
utility::string_t V0_0_41_openapi_reservation_resp_reservations_inner::getUsers() const
{
    return m_Users;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::setUsers(const utility::string_t& value)
{
    m_Users = value;
    m_UsersIsSet = true;
}

bool V0_0_41_openapi_reservation_resp_reservations_inner::usersIsSet() const
{
    return m_UsersIsSet;
}

void V0_0_41_openapi_reservation_resp_reservations_inner::unsetUsers()
{
    m_UsersIsSet = false;
}
}
}
}
}


