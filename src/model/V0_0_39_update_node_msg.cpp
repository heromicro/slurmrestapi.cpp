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



#include "slurmrestapi/model/V0_0_39_update_node_msg.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_39_update_node_msg::V0_0_39_update_node_msg()
{
    m_Comment = utility::conversions::to_string_t("");
    m_CommentIsSet = false;
    m_Cpu_bind = 0;
    m_Cpu_bindIsSet = false;
    m_Extra = utility::conversions::to_string_t("");
    m_ExtraIsSet = false;
    m_FeaturesIsSet = false;
    m_Features_actIsSet = false;
    m_Gres = utility::conversions::to_string_t("");
    m_GresIsSet = false;
    m_AddressIsSet = false;
    m_HostnameIsSet = false;
    m_NameIsSet = false;
    m_StateIsSet = false;
    m_Reason = utility::conversions::to_string_t("");
    m_ReasonIsSet = false;
    m_Reason_uid = utility::conversions::to_string_t("");
    m_Reason_uidIsSet = false;
    m_Resume_afterIsSet = false;
    m_WeightIsSet = false;
}

V0_0_39_update_node_msg::~V0_0_39_update_node_msg()
{
}

void V0_0_39_update_node_msg::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_39_update_node_msg::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CommentIsSet)
    {
        val[utility::conversions::to_string_t(U("comment"))] = ModelBase::toJson(m_Comment);
    }
    if(m_Cpu_bindIsSet)
    {
        val[utility::conversions::to_string_t(U("cpu_bind"))] = ModelBase::toJson(m_Cpu_bind);
    }
    if(m_ExtraIsSet)
    {
        val[utility::conversions::to_string_t(U("extra"))] = ModelBase::toJson(m_Extra);
    }
    if(m_FeaturesIsSet)
    {
        val[utility::conversions::to_string_t(U("features"))] = ModelBase::toJson(m_Features);
    }
    if(m_Features_actIsSet)
    {
        val[utility::conversions::to_string_t(U("features_act"))] = ModelBase::toJson(m_Features_act);
    }
    if(m_GresIsSet)
    {
        val[utility::conversions::to_string_t(U("gres"))] = ModelBase::toJson(m_Gres);
    }
    if(m_AddressIsSet)
    {
        val[utility::conversions::to_string_t(U("address"))] = ModelBase::toJson(m_Address);
    }
    if(m_HostnameIsSet)
    {
        val[utility::conversions::to_string_t(U("hostname"))] = ModelBase::toJson(m_Hostname);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_StateIsSet)
    {
        val[utility::conversions::to_string_t(U("state"))] = ModelBase::toJson(m_State);
    }
    if(m_ReasonIsSet)
    {
        val[utility::conversions::to_string_t(U("reason"))] = ModelBase::toJson(m_Reason);
    }
    if(m_Reason_uidIsSet)
    {
        val[utility::conversions::to_string_t(U("reason_uid"))] = ModelBase::toJson(m_Reason_uid);
    }
    if(m_Resume_afterIsSet)
    {
        val[utility::conversions::to_string_t(U("resume_after"))] = ModelBase::toJson(m_Resume_after);
    }
    if(m_WeightIsSet)
    {
        val[utility::conversions::to_string_t(U("weight"))] = ModelBase::toJson(m_Weight);
    }

    return val;
}

bool V0_0_39_update_node_msg::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("comment"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("comment")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setComment;
            ok &= ModelBase::fromJson(fieldValue, refVal_setComment);
            setComment(refVal_setComment);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("cpu_bind"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cpu_bind")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setCpuBind;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCpuBind);
            setCpuBind(refVal_setCpuBind);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("extra"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("extra")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setExtra;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExtra);
            setExtra(refVal_setExtra);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("features"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("features")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setFeatures;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFeatures);
            setFeatures(refVal_setFeatures);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("features_act"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("features_act")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setFeaturesAct;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFeaturesAct);
            setFeaturesAct(refVal_setFeaturesAct);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("gres"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("gres")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setGres;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGres);
            setGres(refVal_setGres);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("address"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("address")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAddress);
            setAddress(refVal_setAddress);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("hostname"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("hostname")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setHostname;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHostname);
            setHostname(refVal_setHostname);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("state"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("state")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setState;
            ok &= ModelBase::fromJson(fieldValue, refVal_setState);
            setState(refVal_setState);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("reason"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("reason")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setReason;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReason);
            setReason(refVal_setReason);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("reason_uid"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("reason_uid")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setReasonUid;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReasonUid);
            setReasonUid(refVal_setReasonUid);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("resume_after"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("resume_after")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_uint32_no_val> refVal_setResumeAfter;
            ok &= ModelBase::fromJson(fieldValue, refVal_setResumeAfter);
            setResumeAfter(refVal_setResumeAfter);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("weight"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("weight")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_uint32_no_val> refVal_setWeight;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWeight);
            setWeight(refVal_setWeight);
        }
    }
    return ok;
}

void V0_0_39_update_node_msg::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_CommentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("comment")), m_Comment));
    }
    if(m_Cpu_bindIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cpu_bind")), m_Cpu_bind));
    }
    if(m_ExtraIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("extra")), m_Extra));
    }
    if(m_FeaturesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("features")), m_Features));
    }
    if(m_Features_actIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("features_act")), m_Features_act));
    }
    if(m_GresIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("gres")), m_Gres));
    }
    if(m_AddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("address")), m_Address));
    }
    if(m_HostnameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("hostname")), m_Hostname));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("state")), m_State));
    }
    if(m_ReasonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("reason")), m_Reason));
    }
    if(m_Reason_uidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("reason_uid")), m_Reason_uid));
    }
    if(m_Resume_afterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("resume_after")), m_Resume_after));
    }
    if(m_WeightIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("weight")), m_Weight));
    }
}

bool V0_0_39_update_node_msg::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("comment"))))
    {
        utility::string_t refVal_setComment;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("comment"))), refVal_setComment );
        setComment(refVal_setComment);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cpu_bind"))))
    {
        int32_t refVal_setCpuBind;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cpu_bind"))), refVal_setCpuBind );
        setCpuBind(refVal_setCpuBind);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("extra"))))
    {
        utility::string_t refVal_setExtra;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("extra"))), refVal_setExtra );
        setExtra(refVal_setExtra);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("features"))))
    {
        std::vector<utility::string_t> refVal_setFeatures;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("features"))), refVal_setFeatures );
        setFeatures(refVal_setFeatures);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("features_act"))))
    {
        std::vector<utility::string_t> refVal_setFeaturesAct;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("features_act"))), refVal_setFeaturesAct );
        setFeaturesAct(refVal_setFeaturesAct);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("gres"))))
    {
        utility::string_t refVal_setGres;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("gres"))), refVal_setGres );
        setGres(refVal_setGres);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("address"))))
    {
        std::vector<utility::string_t> refVal_setAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("address"))), refVal_setAddress );
        setAddress(refVal_setAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("hostname"))))
    {
        std::vector<utility::string_t> refVal_setHostname;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("hostname"))), refVal_setHostname );
        setHostname(refVal_setHostname);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        std::vector<utility::string_t> refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("state"))))
    {
        std::vector<utility::string_t> refVal_setState;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("state"))), refVal_setState );
        setState(refVal_setState);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("reason"))))
    {
        utility::string_t refVal_setReason;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("reason"))), refVal_setReason );
        setReason(refVal_setReason);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("reason_uid"))))
    {
        utility::string_t refVal_setReasonUid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("reason_uid"))), refVal_setReasonUid );
        setReasonUid(refVal_setReasonUid);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("resume_after"))))
    {
        std::shared_ptr<V0_0_39_uint32_no_val> refVal_setResumeAfter;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("resume_after"))), refVal_setResumeAfter );
        setResumeAfter(refVal_setResumeAfter);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("weight"))))
    {
        std::shared_ptr<V0_0_39_uint32_no_val> refVal_setWeight;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("weight"))), refVal_setWeight );
        setWeight(refVal_setWeight);
    }
    return ok;
}

utility::string_t V0_0_39_update_node_msg::getComment() const
{
    return m_Comment;
}

void V0_0_39_update_node_msg::setComment(const utility::string_t& value)
{
    m_Comment = value;
    m_CommentIsSet = true;
}

bool V0_0_39_update_node_msg::commentIsSet() const
{
    return m_CommentIsSet;
}

void V0_0_39_update_node_msg::unsetComment()
{
    m_CommentIsSet = false;
}
int32_t V0_0_39_update_node_msg::getCpuBind() const
{
    return m_Cpu_bind;
}

void V0_0_39_update_node_msg::setCpuBind(int32_t value)
{
    m_Cpu_bind = value;
    m_Cpu_bindIsSet = true;
}

bool V0_0_39_update_node_msg::cpuBindIsSet() const
{
    return m_Cpu_bindIsSet;
}

void V0_0_39_update_node_msg::unsetCpu_bind()
{
    m_Cpu_bindIsSet = false;
}
utility::string_t V0_0_39_update_node_msg::getExtra() const
{
    return m_Extra;
}

void V0_0_39_update_node_msg::setExtra(const utility::string_t& value)
{
    m_Extra = value;
    m_ExtraIsSet = true;
}

bool V0_0_39_update_node_msg::extraIsSet() const
{
    return m_ExtraIsSet;
}

void V0_0_39_update_node_msg::unsetExtra()
{
    m_ExtraIsSet = false;
}
std::vector<utility::string_t>& V0_0_39_update_node_msg::getFeatures()
{
    return m_Features;
}

void V0_0_39_update_node_msg::setFeatures(const std::vector<utility::string_t>& value)
{
    m_Features = value;
    m_FeaturesIsSet = true;
}

bool V0_0_39_update_node_msg::featuresIsSet() const
{
    return m_FeaturesIsSet;
}

void V0_0_39_update_node_msg::unsetFeatures()
{
    m_FeaturesIsSet = false;
}
std::vector<utility::string_t>& V0_0_39_update_node_msg::getFeaturesAct()
{
    return m_Features_act;
}

void V0_0_39_update_node_msg::setFeaturesAct(const std::vector<utility::string_t>& value)
{
    m_Features_act = value;
    m_Features_actIsSet = true;
}

bool V0_0_39_update_node_msg::featuresActIsSet() const
{
    return m_Features_actIsSet;
}

void V0_0_39_update_node_msg::unsetFeatures_act()
{
    m_Features_actIsSet = false;
}
utility::string_t V0_0_39_update_node_msg::getGres() const
{
    return m_Gres;
}

void V0_0_39_update_node_msg::setGres(const utility::string_t& value)
{
    m_Gres = value;
    m_GresIsSet = true;
}

bool V0_0_39_update_node_msg::gresIsSet() const
{
    return m_GresIsSet;
}

void V0_0_39_update_node_msg::unsetGres()
{
    m_GresIsSet = false;
}
std::vector<utility::string_t>& V0_0_39_update_node_msg::getAddress()
{
    return m_Address;
}

void V0_0_39_update_node_msg::setAddress(const std::vector<utility::string_t>& value)
{
    m_Address = value;
    m_AddressIsSet = true;
}

bool V0_0_39_update_node_msg::addressIsSet() const
{
    return m_AddressIsSet;
}

void V0_0_39_update_node_msg::unsetAddress()
{
    m_AddressIsSet = false;
}
std::vector<utility::string_t>& V0_0_39_update_node_msg::getHostname()
{
    return m_Hostname;
}

void V0_0_39_update_node_msg::setHostname(const std::vector<utility::string_t>& value)
{
    m_Hostname = value;
    m_HostnameIsSet = true;
}

bool V0_0_39_update_node_msg::hostnameIsSet() const
{
    return m_HostnameIsSet;
}

void V0_0_39_update_node_msg::unsetHostname()
{
    m_HostnameIsSet = false;
}
std::vector<utility::string_t>& V0_0_39_update_node_msg::getName()
{
    return m_Name;
}

void V0_0_39_update_node_msg::setName(const std::vector<utility::string_t>& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool V0_0_39_update_node_msg::nameIsSet() const
{
    return m_NameIsSet;
}

void V0_0_39_update_node_msg::unsetName()
{
    m_NameIsSet = false;
}
std::vector<utility::string_t>& V0_0_39_update_node_msg::getState()
{
    return m_State;
}

void V0_0_39_update_node_msg::setState(const std::vector<utility::string_t>& value)
{
    m_State = value;
    m_StateIsSet = true;
}

bool V0_0_39_update_node_msg::stateIsSet() const
{
    return m_StateIsSet;
}

void V0_0_39_update_node_msg::unsetState()
{
    m_StateIsSet = false;
}
utility::string_t V0_0_39_update_node_msg::getReason() const
{
    return m_Reason;
}

void V0_0_39_update_node_msg::setReason(const utility::string_t& value)
{
    m_Reason = value;
    m_ReasonIsSet = true;
}

bool V0_0_39_update_node_msg::reasonIsSet() const
{
    return m_ReasonIsSet;
}

void V0_0_39_update_node_msg::unsetReason()
{
    m_ReasonIsSet = false;
}
utility::string_t V0_0_39_update_node_msg::getReasonUid() const
{
    return m_Reason_uid;
}

void V0_0_39_update_node_msg::setReasonUid(const utility::string_t& value)
{
    m_Reason_uid = value;
    m_Reason_uidIsSet = true;
}

bool V0_0_39_update_node_msg::reasonUidIsSet() const
{
    return m_Reason_uidIsSet;
}

void V0_0_39_update_node_msg::unsetReason_uid()
{
    m_Reason_uidIsSet = false;
}
std::shared_ptr<V0_0_39_uint32_no_val> V0_0_39_update_node_msg::getResumeAfter() const
{
    return m_Resume_after;
}

void V0_0_39_update_node_msg::setResumeAfter(const std::shared_ptr<V0_0_39_uint32_no_val>& value)
{
    m_Resume_after = value;
    m_Resume_afterIsSet = true;
}

bool V0_0_39_update_node_msg::resumeAfterIsSet() const
{
    return m_Resume_afterIsSet;
}

void V0_0_39_update_node_msg::unsetResume_after()
{
    m_Resume_afterIsSet = false;
}
std::shared_ptr<V0_0_39_uint32_no_val> V0_0_39_update_node_msg::getWeight() const
{
    return m_Weight;
}

void V0_0_39_update_node_msg::setWeight(const std::shared_ptr<V0_0_39_uint32_no_val>& value)
{
    m_Weight = value;
    m_WeightIsSet = true;
}

bool V0_0_39_update_node_msg::weightIsSet() const
{
    return m_WeightIsSet;
}

void V0_0_39_update_node_msg::unsetWeight()
{
    m_WeightIsSet = false;
}
}
}
}
}


