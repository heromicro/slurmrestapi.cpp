/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_39_assoc.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_39_assoc::V0_0_39_assoc()
{
    m_Account = utility::conversions::to_string_t("");
    m_AccountIsSet = false;
    m_Cluster = utility::conversions::to_string_t("");
    m_ClusterIsSet = false;
    m_r_defaultIsSet = false;
    m_FlagsIsSet = false;
    m_MaxIsSet = false;
    m_Is_default = false;
    m_Is_defaultIsSet = false;
    m_MinIsSet = false;
    m_Parent_account = utility::conversions::to_string_t("");
    m_Parent_accountIsSet = false;
    m_Partition = utility::conversions::to_string_t("");
    m_PartitionIsSet = false;
    m_PriorityIsSet = false;
    m_QosIsSet = false;
    m_Shares_raw = 0;
    m_Shares_rawIsSet = false;
    m_UsageIsSet = false;
    m_User = utility::conversions::to_string_t("");
    m_UserIsSet = false;
}

V0_0_39_assoc::~V0_0_39_assoc()
{
}

void V0_0_39_assoc::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_39_assoc::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AccountIsSet)
    {
        val[utility::conversions::to_string_t(U("account"))] = ModelBase::toJson(m_Account);
    }
    if(m_ClusterIsSet)
    {
        val[utility::conversions::to_string_t(U("cluster"))] = ModelBase::toJson(m_Cluster);
    }
    if(m_r_defaultIsSet)
    {
        val[utility::conversions::to_string_t(U("default"))] = ModelBase::toJson(m_r_default);
    }
    if(m_FlagsIsSet)
    {
        val[utility::conversions::to_string_t(U("flags"))] = ModelBase::toJson(m_Flags);
    }
    if(m_MaxIsSet)
    {
        val[utility::conversions::to_string_t(U("max"))] = ModelBase::toJson(m_Max);
    }
    if(m_Is_defaultIsSet)
    {
        val[utility::conversions::to_string_t(U("is_default"))] = ModelBase::toJson(m_Is_default);
    }
    if(m_MinIsSet)
    {
        val[utility::conversions::to_string_t(U("min"))] = ModelBase::toJson(m_Min);
    }
    if(m_Parent_accountIsSet)
    {
        val[utility::conversions::to_string_t(U("parent_account"))] = ModelBase::toJson(m_Parent_account);
    }
    if(m_PartitionIsSet)
    {
        val[utility::conversions::to_string_t(U("partition"))] = ModelBase::toJson(m_Partition);
    }
    if(m_PriorityIsSet)
    {
        val[utility::conversions::to_string_t(U("priority"))] = ModelBase::toJson(m_Priority);
    }
    if(m_QosIsSet)
    {
        val[utility::conversions::to_string_t(U("qos"))] = ModelBase::toJson(m_Qos);
    }
    if(m_Shares_rawIsSet)
    {
        val[utility::conversions::to_string_t(U("shares_raw"))] = ModelBase::toJson(m_Shares_raw);
    }
    if(m_UsageIsSet)
    {
        val[utility::conversions::to_string_t(U("usage"))] = ModelBase::toJson(m_Usage);
    }
    if(m_UserIsSet)
    {
        val[utility::conversions::to_string_t(U("user"))] = ModelBase::toJson(m_User);
    }

    return val;
}

bool V0_0_39_assoc::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("cluster"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cluster")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCluster;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCluster);
            setCluster(refVal_setCluster);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("default"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("default")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_assoc_default> refVal_setRDefault;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRDefault);
            setRDefault(refVal_setRDefault);
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
    if(val.has_field(utility::conversions::to_string_t(U("max"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("max")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_assoc_max> refVal_setMax;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMax);
            setMax(refVal_setMax);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("is_default"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("is_default")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsDefault;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsDefault);
            setIsDefault(refVal_setIsDefault);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("min"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("min")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_assoc_min> refVal_setMin;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMin);
            setMin(refVal_setMin);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("parent_account"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("parent_account")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setParentAccount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setParentAccount);
            setParentAccount(refVal_setParentAccount);
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
    if(val.has_field(utility::conversions::to_string_t(U("priority"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("priority")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_uint32_no_val> refVal_setPriority;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPriority);
            setPriority(refVal_setPriority);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("qos"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("qos")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setQos;
            ok &= ModelBase::fromJson(fieldValue, refVal_setQos);
            setQos(refVal_setQos);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("shares_raw"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("shares_raw")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setSharesRaw;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSharesRaw);
            setSharesRaw(refVal_setSharesRaw);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("usage"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("usage")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_assoc_usage> refVal_setUsage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUsage);
            setUsage(refVal_setUsage);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("user"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("user")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUser;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUser);
            setUser(refVal_setUser);
        }
    }
    return ok;
}

void V0_0_39_assoc::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ClusterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cluster")), m_Cluster));
    }
    if(m_r_defaultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("default")), m_r_default));
    }
    if(m_FlagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("flags")), m_Flags));
    }
    if(m_MaxIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("max")), m_Max));
    }
    if(m_Is_defaultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_default")), m_Is_default));
    }
    if(m_MinIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("min")), m_Min));
    }
    if(m_Parent_accountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("parent_account")), m_Parent_account));
    }
    if(m_PartitionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("partition")), m_Partition));
    }
    if(m_PriorityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("priority")), m_Priority));
    }
    if(m_QosIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("qos")), m_Qos));
    }
    if(m_Shares_rawIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("shares_raw")), m_Shares_raw));
    }
    if(m_UsageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("usage")), m_Usage));
    }
    if(m_UserIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("user")), m_User));
    }
}

bool V0_0_39_assoc::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("cluster"))))
    {
        utility::string_t refVal_setCluster;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cluster"))), refVal_setCluster );
        setCluster(refVal_setCluster);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("default"))))
    {
        std::shared_ptr<V0_0_39_assoc_default> refVal_setRDefault;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("default"))), refVal_setRDefault );
        setRDefault(refVal_setRDefault);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("flags"))))
    {
        std::vector<utility::string_t> refVal_setFlags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("flags"))), refVal_setFlags );
        setFlags(refVal_setFlags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("max"))))
    {
        std::shared_ptr<V0_0_39_assoc_max> refVal_setMax;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("max"))), refVal_setMax );
        setMax(refVal_setMax);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("is_default"))))
    {
        bool refVal_setIsDefault;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_default"))), refVal_setIsDefault );
        setIsDefault(refVal_setIsDefault);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("min"))))
    {
        std::shared_ptr<V0_0_39_assoc_min> refVal_setMin;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("min"))), refVal_setMin );
        setMin(refVal_setMin);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("parent_account"))))
    {
        utility::string_t refVal_setParentAccount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("parent_account"))), refVal_setParentAccount );
        setParentAccount(refVal_setParentAccount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("partition"))))
    {
        utility::string_t refVal_setPartition;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("partition"))), refVal_setPartition );
        setPartition(refVal_setPartition);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("priority"))))
    {
        std::shared_ptr<V0_0_39_uint32_no_val> refVal_setPriority;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("priority"))), refVal_setPriority );
        setPriority(refVal_setPriority);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("qos"))))
    {
        std::vector<utility::string_t> refVal_setQos;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("qos"))), refVal_setQos );
        setQos(refVal_setQos);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("shares_raw"))))
    {
        int32_t refVal_setSharesRaw;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("shares_raw"))), refVal_setSharesRaw );
        setSharesRaw(refVal_setSharesRaw);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("usage"))))
    {
        std::shared_ptr<V0_0_39_assoc_usage> refVal_setUsage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("usage"))), refVal_setUsage );
        setUsage(refVal_setUsage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("user"))))
    {
        utility::string_t refVal_setUser;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("user"))), refVal_setUser );
        setUser(refVal_setUser);
    }
    return ok;
}

utility::string_t V0_0_39_assoc::getAccount() const
{
    return m_Account;
}

void V0_0_39_assoc::setAccount(const utility::string_t& value)
{
    m_Account = value;
    m_AccountIsSet = true;
}

bool V0_0_39_assoc::accountIsSet() const
{
    return m_AccountIsSet;
}

void V0_0_39_assoc::unsetAccount()
{
    m_AccountIsSet = false;
}
utility::string_t V0_0_39_assoc::getCluster() const
{
    return m_Cluster;
}

void V0_0_39_assoc::setCluster(const utility::string_t& value)
{
    m_Cluster = value;
    m_ClusterIsSet = true;
}

bool V0_0_39_assoc::clusterIsSet() const
{
    return m_ClusterIsSet;
}

void V0_0_39_assoc::unsetCluster()
{
    m_ClusterIsSet = false;
}
std::shared_ptr<V0_0_39_assoc_default> V0_0_39_assoc::getRDefault() const
{
    return m_r_default;
}

void V0_0_39_assoc::setRDefault(const std::shared_ptr<V0_0_39_assoc_default>& value)
{
    m_r_default = value;
    m_r_defaultIsSet = true;
}

bool V0_0_39_assoc::rDefaultIsSet() const
{
    return m_r_defaultIsSet;
}

void V0_0_39_assoc::unsetr_default()
{
    m_r_defaultIsSet = false;
}
std::vector<utility::string_t>& V0_0_39_assoc::getFlags()
{
    return m_Flags;
}

void V0_0_39_assoc::setFlags(const std::vector<utility::string_t>& value)
{
    m_Flags = value;
    m_FlagsIsSet = true;
}

bool V0_0_39_assoc::flagsIsSet() const
{
    return m_FlagsIsSet;
}

void V0_0_39_assoc::unsetFlags()
{
    m_FlagsIsSet = false;
}
std::shared_ptr<V0_0_39_assoc_max> V0_0_39_assoc::getMax() const
{
    return m_Max;
}

void V0_0_39_assoc::setMax(const std::shared_ptr<V0_0_39_assoc_max>& value)
{
    m_Max = value;
    m_MaxIsSet = true;
}

bool V0_0_39_assoc::maxIsSet() const
{
    return m_MaxIsSet;
}

void V0_0_39_assoc::unsetMax()
{
    m_MaxIsSet = false;
}
bool V0_0_39_assoc::isIsDefault() const
{
    return m_Is_default;
}

void V0_0_39_assoc::setIsDefault(bool value)
{
    m_Is_default = value;
    m_Is_defaultIsSet = true;
}

bool V0_0_39_assoc::isDefaultIsSet() const
{
    return m_Is_defaultIsSet;
}

void V0_0_39_assoc::unsetIs_default()
{
    m_Is_defaultIsSet = false;
}
std::shared_ptr<V0_0_39_assoc_min> V0_0_39_assoc::getMin() const
{
    return m_Min;
}

void V0_0_39_assoc::setMin(const std::shared_ptr<V0_0_39_assoc_min>& value)
{
    m_Min = value;
    m_MinIsSet = true;
}

bool V0_0_39_assoc::minIsSet() const
{
    return m_MinIsSet;
}

void V0_0_39_assoc::unsetMin()
{
    m_MinIsSet = false;
}
utility::string_t V0_0_39_assoc::getParentAccount() const
{
    return m_Parent_account;
}

void V0_0_39_assoc::setParentAccount(const utility::string_t& value)
{
    m_Parent_account = value;
    m_Parent_accountIsSet = true;
}

bool V0_0_39_assoc::parentAccountIsSet() const
{
    return m_Parent_accountIsSet;
}

void V0_0_39_assoc::unsetParent_account()
{
    m_Parent_accountIsSet = false;
}
utility::string_t V0_0_39_assoc::getPartition() const
{
    return m_Partition;
}

void V0_0_39_assoc::setPartition(const utility::string_t& value)
{
    m_Partition = value;
    m_PartitionIsSet = true;
}

bool V0_0_39_assoc::partitionIsSet() const
{
    return m_PartitionIsSet;
}

void V0_0_39_assoc::unsetPartition()
{
    m_PartitionIsSet = false;
}
std::shared_ptr<V0_0_39_uint32_no_val> V0_0_39_assoc::getPriority() const
{
    return m_Priority;
}

void V0_0_39_assoc::setPriority(const std::shared_ptr<V0_0_39_uint32_no_val>& value)
{
    m_Priority = value;
    m_PriorityIsSet = true;
}

bool V0_0_39_assoc::priorityIsSet() const
{
    return m_PriorityIsSet;
}

void V0_0_39_assoc::unsetPriority()
{
    m_PriorityIsSet = false;
}
std::vector<utility::string_t>& V0_0_39_assoc::getQos()
{
    return m_Qos;
}

void V0_0_39_assoc::setQos(const std::vector<utility::string_t>& value)
{
    m_Qos = value;
    m_QosIsSet = true;
}

bool V0_0_39_assoc::qosIsSet() const
{
    return m_QosIsSet;
}

void V0_0_39_assoc::unsetQos()
{
    m_QosIsSet = false;
}
int32_t V0_0_39_assoc::getSharesRaw() const
{
    return m_Shares_raw;
}

void V0_0_39_assoc::setSharesRaw(int32_t value)
{
    m_Shares_raw = value;
    m_Shares_rawIsSet = true;
}

bool V0_0_39_assoc::sharesRawIsSet() const
{
    return m_Shares_rawIsSet;
}

void V0_0_39_assoc::unsetShares_raw()
{
    m_Shares_rawIsSet = false;
}
std::shared_ptr<V0_0_39_assoc_usage> V0_0_39_assoc::getUsage() const
{
    return m_Usage;
}

void V0_0_39_assoc::setUsage(const std::shared_ptr<V0_0_39_assoc_usage>& value)
{
    m_Usage = value;
    m_UsageIsSet = true;
}

bool V0_0_39_assoc::usageIsSet() const
{
    return m_UsageIsSet;
}

void V0_0_39_assoc::unsetUsage()
{
    m_UsageIsSet = false;
}
utility::string_t V0_0_39_assoc::getUser() const
{
    return m_User;
}

void V0_0_39_assoc::setUser(const utility::string_t& value)
{
    m_User = value;
    m_UserIsSet = true;
}

bool V0_0_39_assoc::userIsSet() const
{
    return m_UserIsSet;
}

void V0_0_39_assoc::unsetUser()
{
    m_UserIsSet = false;
}
}
}
}
}


