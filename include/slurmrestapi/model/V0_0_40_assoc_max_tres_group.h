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
 * V0_0_40_assoc_max_tres_group.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_40_assoc_max_tres_group_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_40_assoc_max_tres_group_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_40_tres.h"
#include <vector>

namespace hm {
namespace slurm {
namespace client {
namespace model {

class V0_0_40_tres;


/// <summary>
/// 
/// </summary>
class  V0_0_40_assoc_max_tres_group
    : public ModelBase
{
public:
    V0_0_40_assoc_max_tres_group();
    virtual ~V0_0_40_assoc_max_tres_group();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_assoc_max_tres_group members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<V0_0_40_tres>>& getMinutes();
    bool minutesIsSet() const;
    void unsetMinutes();

    void setMinutes(const std::vector<std::shared_ptr<V0_0_40_tres>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<V0_0_40_tres>>& getActive();
    bool activeIsSet() const;
    void unsetActive();

    void setActive(const std::vector<std::shared_ptr<V0_0_40_tres>>& value);


protected:
    std::vector<std::shared_ptr<V0_0_40_tres>> m_Minutes;
    bool m_MinutesIsSet;
    std::vector<std::shared_ptr<V0_0_40_tres>> m_Active;
    bool m_ActiveIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_40_assoc_max_tres_group_H_ */