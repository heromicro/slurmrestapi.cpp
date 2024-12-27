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
 * V0_0_39_step_step.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_39_step_step_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_39_step_step_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_39_slurm_step_id.h"
#include <cpprest/details/basic_types.h>

namespace hm {
namespace slurm {
namespace client {
namespace model {

class V0_0_39_slurm_step_id;


/// <summary>
/// 
/// </summary>
class  V0_0_39_step_step
    : public ModelBase
{
public:
    V0_0_39_step_step();
    virtual ~V0_0_39_step_step();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_step_step members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_39_slurm_step_id> getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const std::shared_ptr<V0_0_39_slurm_step_id>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);


protected:
    std::shared_ptr<V0_0_39_slurm_step_id> m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_39_step_step_H_ */
