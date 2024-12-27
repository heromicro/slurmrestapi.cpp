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

/*
 * V0_0_39_update_node_msg.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_39_update_node_msg_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_39_update_node_msg_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_39_uint32_no_val.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace hm {
namespace slurm {
namespace client {
namespace model {

class V0_0_39_uint32_no_val;


/// <summary>
/// 
/// </summary>
class  V0_0_39_update_node_msg
    : public ModelBase
{
public:
    V0_0_39_update_node_msg();
    virtual ~V0_0_39_update_node_msg();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_update_node_msg members

    /// <summary>
    /// arbitrary comment
    /// </summary>
    utility::string_t getComment() const;
    bool commentIsSet() const;
    void unsetComment();

    void setComment(const utility::string_t& value);

    /// <summary>
    /// default CPU binding type
    /// </summary>
    int32_t getCpuBind() const;
    bool cpuBindIsSet() const;
    void unsetCpu_bind();

    void setCpuBind(int32_t value);

    /// <summary>
    /// arbitrary string
    /// </summary>
    utility::string_t getExtra() const;
    bool extraIsSet() const;
    void unsetExtra();

    void setExtra(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getFeatures();
    bool featuresIsSet() const;
    void unsetFeatures();

    void setFeatures(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getFeaturesAct();
    bool featuresActIsSet() const;
    void unsetFeatures_act();

    void setFeaturesAct(const std::vector<utility::string_t>& value);

    /// <summary>
    /// new generic resources for node
    /// </summary>
    utility::string_t getGres() const;
    bool gresIsSet() const;
    void unsetGres();

    void setGres(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getAddress();
    bool addressIsSet() const;
    void unsetAddress();

    void setAddress(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getHostname();
    bool hostnameIsSet() const;
    void unsetHostname();

    void setHostname(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getName();
    bool nameIsSet() const;
    void unsetName();

    void setName(const std::vector<utility::string_t>& value);

    /// <summary>
    /// assign new node state
    /// </summary>
    std::vector<utility::string_t>& getState();
    bool stateIsSet() const;
    void unsetState();

    void setState(const std::vector<utility::string_t>& value);

    /// <summary>
    /// reason for node being DOWN or DRAINING
    /// </summary>
    utility::string_t getReason() const;
    bool reasonIsSet() const;
    void unsetReason();

    void setReason(const utility::string_t& value);

    /// <summary>
    /// user ID of sending (needed if user root is sending message)
    /// </summary>
    utility::string_t getReasonUid() const;
    bool reasonUidIsSet() const;
    void unsetReason_uid();

    void setReasonUid(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_uint32_no_val> getResumeAfter() const;
    bool resumeAfterIsSet() const;
    void unsetResume_after();

    void setResumeAfter(const std::shared_ptr<V0_0_39_uint32_no_val>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_uint32_no_val> getWeight() const;
    bool weightIsSet() const;
    void unsetWeight();

    void setWeight(const std::shared_ptr<V0_0_39_uint32_no_val>& value);


protected:
    utility::string_t m_Comment;
    bool m_CommentIsSet;
    int32_t m_Cpu_bind;
    bool m_Cpu_bindIsSet;
    utility::string_t m_Extra;
    bool m_ExtraIsSet;
    std::vector<utility::string_t> m_Features;
    bool m_FeaturesIsSet;
    std::vector<utility::string_t> m_Features_act;
    bool m_Features_actIsSet;
    utility::string_t m_Gres;
    bool m_GresIsSet;
    std::vector<utility::string_t> m_Address;
    bool m_AddressIsSet;
    std::vector<utility::string_t> m_Hostname;
    bool m_HostnameIsSet;
    std::vector<utility::string_t> m_Name;
    bool m_NameIsSet;
    std::vector<utility::string_t> m_State;
    bool m_StateIsSet;
    utility::string_t m_Reason;
    bool m_ReasonIsSet;
    utility::string_t m_Reason_uid;
    bool m_Reason_uidIsSet;
    std::shared_ptr<V0_0_39_uint32_no_val> m_Resume_after;
    bool m_Resume_afterIsSet;
    std::shared_ptr<V0_0_39_uint32_no_val> m_Weight;
    bool m_WeightIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_39_update_node_msg_H_ */
