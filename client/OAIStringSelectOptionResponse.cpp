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

#include "OAIStringSelectOptionResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIStringSelectOptionResponse::OAIStringSelectOptionResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIStringSelectOptionResponse::OAIStringSelectOptionResponse() {
    this->initializeModel();
}

OAIStringSelectOptionResponse::~OAIStringSelectOptionResponse() {}

void OAIStringSelectOptionResponse::initializeModel() {

    m_label_isSet = false;
    m_label_isValid = false;

    m_value_isSet = false;
    m_value_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_emoji_isSet = false;
    m_emoji_isValid = false;

    m_r_default_isSet = false;
    m_r_default_isValid = false;
}

void OAIStringSelectOptionResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIStringSelectOptionResponse::fromJsonObject(QJsonObject json) {

    m_label_isValid = ::dc_rest::fromJsonValue(m_label, json[QString("label")]);
    m_label_isSet = !json[QString("label")].isNull() && m_label_isValid;

    m_value_isValid = ::dc_rest::fromJsonValue(m_value, json[QString("value")]);
    m_value_isSet = !json[QString("value")].isNull() && m_value_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_emoji_isValid = ::dc_rest::fromJsonValue(m_emoji, json[QString("emoji")]);
    m_emoji_isSet = !json[QString("emoji")].isNull() && m_emoji_isValid;

    m_r_default_isValid = ::dc_rest::fromJsonValue(m_r_default, json[QString("default")]);
    m_r_default_isSet = !json[QString("default")].isNull() && m_r_default_isValid;
}

QString OAIStringSelectOptionResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIStringSelectOptionResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_label_isSet) {
        obj.insert(QString("label"), ::dc_rest::toJsonValue(m_label));
    }
    if (m_value_isSet) {
        obj.insert(QString("value"), ::dc_rest::toJsonValue(m_value));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_emoji.isSet()) {
        obj.insert(QString("emoji"), ::dc_rest::toJsonValue(m_emoji));
    }
    if (m_r_default_isSet) {
        obj.insert(QString("default"), ::dc_rest::toJsonValue(m_r_default));
    }
    return obj;
}

QString OAIStringSelectOptionResponse::getLabel() const {
    return m_label;
}
void OAIStringSelectOptionResponse::setLabel(const QString &label) {
    m_label = label;
    m_label_isSet = true;
}

bool OAIStringSelectOptionResponse::is_label_Set() const{
    return m_label_isSet;
}

bool OAIStringSelectOptionResponse::is_label_Valid() const{
    return m_label_isValid;
}

QString OAIStringSelectOptionResponse::getValue() const {
    return m_value;
}
void OAIStringSelectOptionResponse::setValue(const QString &value) {
    m_value = value;
    m_value_isSet = true;
}

bool OAIStringSelectOptionResponse::is_value_Set() const{
    return m_value_isSet;
}

bool OAIStringSelectOptionResponse::is_value_Valid() const{
    return m_value_isValid;
}

QString OAIStringSelectOptionResponse::getDescription() const {
    return m_description;
}
void OAIStringSelectOptionResponse::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIStringSelectOptionResponse::is_description_Set() const{
    return m_description_isSet;
}

bool OAIStringSelectOptionResponse::is_description_Valid() const{
    return m_description_isValid;
}

OAIComponentEmojiResponse OAIStringSelectOptionResponse::getEmoji() const {
    return m_emoji;
}
void OAIStringSelectOptionResponse::setEmoji(const OAIComponentEmojiResponse &emoji) {
    m_emoji = emoji;
    m_emoji_isSet = true;
}

bool OAIStringSelectOptionResponse::is_emoji_Set() const{
    return m_emoji_isSet;
}

bool OAIStringSelectOptionResponse::is_emoji_Valid() const{
    return m_emoji_isValid;
}

bool OAIStringSelectOptionResponse::isRDefault() const {
    return m_r_default;
}
void OAIStringSelectOptionResponse::setRDefault(const bool &r_default) {
    m_r_default = r_default;
    m_r_default_isSet = true;
}

bool OAIStringSelectOptionResponse::is_r_default_Set() const{
    return m_r_default_isSet;
}

bool OAIStringSelectOptionResponse::is_r_default_Valid() const{
    return m_r_default_isValid;
}

bool OAIStringSelectOptionResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_emoji.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_r_default_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIStringSelectOptionResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_label_isValid && m_value_isValid && true;
}

} // namespace dc_rest
