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

#include "OAIApplicationCommandOptionIntegerChoiceResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIApplicationCommandOptionIntegerChoiceResponse::OAIApplicationCommandOptionIntegerChoiceResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIApplicationCommandOptionIntegerChoiceResponse::OAIApplicationCommandOptionIntegerChoiceResponse() {
    this->initializeModel();
}

OAIApplicationCommandOptionIntegerChoiceResponse::~OAIApplicationCommandOptionIntegerChoiceResponse() {}

void OAIApplicationCommandOptionIntegerChoiceResponse::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_value_isSet = false;
    m_value_isValid = false;

    m_name_localized_isSet = false;
    m_name_localized_isValid = false;

    m_name_localizations_isSet = false;
    m_name_localizations_isValid = false;
}

void OAIApplicationCommandOptionIntegerChoiceResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIApplicationCommandOptionIntegerChoiceResponse::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_value_isValid = ::dc_rest::fromJsonValue(m_value, json[QString("value")]);
    m_value_isSet = !json[QString("value")].isNull() && m_value_isValid;

    m_name_localized_isValid = ::dc_rest::fromJsonValue(m_name_localized, json[QString("name_localized")]);
    m_name_localized_isSet = !json[QString("name_localized")].isNull() && m_name_localized_isValid;

    m_name_localizations_isValid = ::dc_rest::fromJsonValue(m_name_localizations, json[QString("name_localizations")]);
    m_name_localizations_isSet = !json[QString("name_localizations")].isNull() && m_name_localizations_isValid;
}

QString OAIApplicationCommandOptionIntegerChoiceResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIApplicationCommandOptionIntegerChoiceResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_value_isSet) {
        obj.insert(QString("value"), ::dc_rest::toJsonValue(m_value));
    }
    if (m_name_localized_isSet) {
        obj.insert(QString("name_localized"), ::dc_rest::toJsonValue(m_name_localized));
    }
    if (m_name_localizations.size() > 0) {
        obj.insert(QString("name_localizations"), ::dc_rest::toJsonValue(m_name_localizations));
    }
    return obj;
}

QString OAIApplicationCommandOptionIntegerChoiceResponse::getName() const {
    return m_name;
}
void OAIApplicationCommandOptionIntegerChoiceResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIApplicationCommandOptionIntegerChoiceResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIApplicationCommandOptionIntegerChoiceResponse::is_name_Valid() const{
    return m_name_isValid;
}

qint64 OAIApplicationCommandOptionIntegerChoiceResponse::getValue() const {
    return m_value;
}
void OAIApplicationCommandOptionIntegerChoiceResponse::setValue(const qint64 &value) {
    m_value = value;
    m_value_isSet = true;
}

bool OAIApplicationCommandOptionIntegerChoiceResponse::is_value_Set() const{
    return m_value_isSet;
}

bool OAIApplicationCommandOptionIntegerChoiceResponse::is_value_Valid() const{
    return m_value_isValid;
}

QString OAIApplicationCommandOptionIntegerChoiceResponse::getNameLocalized() const {
    return m_name_localized;
}
void OAIApplicationCommandOptionIntegerChoiceResponse::setNameLocalized(const QString &name_localized) {
    m_name_localized = name_localized;
    m_name_localized_isSet = true;
}

bool OAIApplicationCommandOptionIntegerChoiceResponse::is_name_localized_Set() const{
    return m_name_localized_isSet;
}

bool OAIApplicationCommandOptionIntegerChoiceResponse::is_name_localized_Valid() const{
    return m_name_localized_isValid;
}

QMap<QString, QString> OAIApplicationCommandOptionIntegerChoiceResponse::getNameLocalizations() const {
    return m_name_localizations;
}
void OAIApplicationCommandOptionIntegerChoiceResponse::setNameLocalizations(const QMap<QString, QString> &name_localizations) {
    m_name_localizations = name_localizations;
    m_name_localizations_isSet = true;
}

bool OAIApplicationCommandOptionIntegerChoiceResponse::is_name_localizations_Set() const{
    return m_name_localizations_isSet;
}

bool OAIApplicationCommandOptionIntegerChoiceResponse::is_name_localizations_Valid() const{
    return m_name_localizations_isValid;
}

bool OAIApplicationCommandOptionIntegerChoiceResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_localized_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_localizations.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIApplicationCommandOptionIntegerChoiceResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && m_value_isValid && true;
}

} // namespace dc_rest
