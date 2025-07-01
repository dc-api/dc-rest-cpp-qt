/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIOnboardingPromptResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIOnboardingPromptResponse::OAIOnboardingPromptResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOnboardingPromptResponse::OAIOnboardingPromptResponse() {
    this->initializeModel();
}

OAIOnboardingPromptResponse::~OAIOnboardingPromptResponse() {}

void OAIOnboardingPromptResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_options_isSet = false;
    m_options_isValid = false;

    m_single_select_isSet = false;
    m_single_select_isValid = false;

    m_required_isSet = false;
    m_required_isValid = false;

    m_in_onboarding_isSet = false;
    m_in_onboarding_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;
}

void OAIOnboardingPromptResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOnboardingPromptResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_title_isValid = ::dc_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_options_isValid = ::dc_rest::fromJsonValue(m_options, json[QString("options")]);
    m_options_isSet = !json[QString("options")].isNull() && m_options_isValid;

    m_single_select_isValid = ::dc_rest::fromJsonValue(m_single_select, json[QString("single_select")]);
    m_single_select_isSet = !json[QString("single_select")].isNull() && m_single_select_isValid;

    m_required_isValid = ::dc_rest::fromJsonValue(m_required, json[QString("required")]);
    m_required_isSet = !json[QString("required")].isNull() && m_required_isValid;

    m_in_onboarding_isValid = ::dc_rest::fromJsonValue(m_in_onboarding, json[QString("in_onboarding")]);
    m_in_onboarding_isSet = !json[QString("in_onboarding")].isNull() && m_in_onboarding_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;
}

QString OAIOnboardingPromptResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOnboardingPromptResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::dc_rest::toJsonValue(m_title));
    }
    if (m_options.size() > 0) {
        obj.insert(QString("options"), ::dc_rest::toJsonValue(m_options));
    }
    if (m_single_select_isSet) {
        obj.insert(QString("single_select"), ::dc_rest::toJsonValue(m_single_select));
    }
    if (m_required_isSet) {
        obj.insert(QString("required"), ::dc_rest::toJsonValue(m_required));
    }
    if (m_in_onboarding_isSet) {
        obj.insert(QString("in_onboarding"), ::dc_rest::toJsonValue(m_in_onboarding));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    return obj;
}

QString OAIOnboardingPromptResponse::getId() const {
    return m_id;
}
void OAIOnboardingPromptResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIOnboardingPromptResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIOnboardingPromptResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIOnboardingPromptResponse::getTitle() const {
    return m_title;
}
void OAIOnboardingPromptResponse::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIOnboardingPromptResponse::is_title_Set() const{
    return m_title_isSet;
}

bool OAIOnboardingPromptResponse::is_title_Valid() const{
    return m_title_isValid;
}

QList<OAIOnboardingPromptOptionResponse> OAIOnboardingPromptResponse::getOptions() const {
    return m_options;
}
void OAIOnboardingPromptResponse::setOptions(const QList<OAIOnboardingPromptOptionResponse> &options) {
    m_options = options;
    m_options_isSet = true;
}

bool OAIOnboardingPromptResponse::is_options_Set() const{
    return m_options_isSet;
}

bool OAIOnboardingPromptResponse::is_options_Valid() const{
    return m_options_isValid;
}

bool OAIOnboardingPromptResponse::isSingleSelect() const {
    return m_single_select;
}
void OAIOnboardingPromptResponse::setSingleSelect(const bool &single_select) {
    m_single_select = single_select;
    m_single_select_isSet = true;
}

bool OAIOnboardingPromptResponse::is_single_select_Set() const{
    return m_single_select_isSet;
}

bool OAIOnboardingPromptResponse::is_single_select_Valid() const{
    return m_single_select_isValid;
}

bool OAIOnboardingPromptResponse::isRequired() const {
    return m_required;
}
void OAIOnboardingPromptResponse::setRequired(const bool &required) {
    m_required = required;
    m_required_isSet = true;
}

bool OAIOnboardingPromptResponse::is_required_Set() const{
    return m_required_isSet;
}

bool OAIOnboardingPromptResponse::is_required_Valid() const{
    return m_required_isValid;
}

bool OAIOnboardingPromptResponse::isInOnboarding() const {
    return m_in_onboarding;
}
void OAIOnboardingPromptResponse::setInOnboarding(const bool &in_onboarding) {
    m_in_onboarding = in_onboarding;
    m_in_onboarding_isSet = true;
}

bool OAIOnboardingPromptResponse::is_in_onboarding_Set() const{
    return m_in_onboarding_isSet;
}

bool OAIOnboardingPromptResponse::is_in_onboarding_Valid() const{
    return m_in_onboarding_isValid;
}

qint32 OAIOnboardingPromptResponse::getType() const {
    return m_type;
}
void OAIOnboardingPromptResponse::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIOnboardingPromptResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAIOnboardingPromptResponse::is_type_Valid() const{
    return m_type_isValid;
}

bool OAIOnboardingPromptResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_options.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_single_select_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_required_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_in_onboarding_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOnboardingPromptResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_title_isValid && m_options_isValid && m_single_select_isValid && m_required_isValid && m_in_onboarding_isValid && m_type_isValid && true;
}

} // namespace dc_rest
