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
 * V0_0_41_update_node_msg_weight.h
 *
 * Weight of the node for scheduling purposes
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_update_node_msg_weight_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_update_node_msg_weight_H_


#include "slurmrestapi/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// Weight of the node for scheduling purposes
/// </summary>
class  V0_0_41_update_node_msg_weight
    : public ModelBase
{
public:
    V0_0_41_update_node_msg_weight();
    virtual ~V0_0_41_update_node_msg_weight();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_update_node_msg_weight members

    /// <summary>
    /// True if number has been set; False if number is unset
    /// </summary>
    bool isSet() const;
    bool setIsSet() const;
    void unsetset();

    void setSet(bool value);

    /// <summary>
    /// True if number has been set to infinite; \&quot;set\&quot; and \&quot;number\&quot; will be ignored
    /// </summary>
    bool isInfinite() const;
    bool infiniteIsSet() const;
    void unsetInfinite();

    void setInfinite(bool value);

    /// <summary>
    /// If \&quot;set\&quot; is True the number will be set with value; otherwise ignore number contents
    /// </summary>
    int32_t getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();

    void setNumber(int32_t value);


protected:
    bool m_set;
    bool m_setIsSet;
    bool m_Infinite;
    bool m_InfiniteIsSet;
    int32_t m_number;
    bool m_numberIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_update_node_msg_weight_H_ */
